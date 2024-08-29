#ifndef IOC_CONTAINER_H
#define IOC_CONTAINER_H

#include <string>
#include <map>
#include <memory>
#include <functional>

template <typename T>
class IocContainer {
public:
    IocContainer() = default;
    virtual ~IocContainer() = default;

    /**
     * @brief 通过唯一标识，注册要创建对象的构造函数
     */
    template <typename Drived>
    void RegisterType(std::string strKey) {
        std::function<T* ()> fun = [] { return new Drived(); }; // 有继承关系
        RegisterType(strKey, fun);
    }

    /**
     * @brief 根据唯一标识查找构造函数
     */
    T *Resolve(std::string strKey)
    {
        auto it = m_createMap.find(strKey);
        return (it != m_createMap.end()) ? it->second() : nullptr; // 真正运行构造函数
    }

    // 创建智能指针
    std::shared_ptr<T> ResolveShared(std::string strKey)
    {
        T *ptr = Resolve(strKey);
        return std::shared_ptr<T>(ptr);
    }

private:
    void RegisterType(std::string strKey, std::function<T* ()> fun)
    {
        auto it = m_createMap.find(strKey);
        if (it != m_createMap.end()) {
            return;
        }

        m_createMap[strKey] = fun;
    }

private:
    std::map<std::string, std::function<T* ()>> m_createMap{};
};

#endif