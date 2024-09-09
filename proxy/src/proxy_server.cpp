#include "proxy_server.h"
#include <fstream>

ProxyServer::ProxyServer(const std::string name, const std::string pwd)
{
    m_userInfo.name = name;
    m_userInfo.pwd = pwd;
    m_isever = new RealServer();
}

ProxyServer::~ProxyServer()
{
    delete m_isever;
    m_isever = nullptr;
}

void ProxyServer::Request()
{
    UserInof user = getUserInfo();
    if ((m_userInfo.name != user.name) || (m_userInfo.pwd != user.pwd)) {
        std::cout << "username or password error..." << std::endl;
        return;
    }

    std::cout << "username or password OK..." << std::endl;
    m_isever->Request();
}

UserInof ProxyServer::getUserInfo()
{
    UserInof user{};
    std::ifstream inFile("/code/cpp-design-patterns/proxy/data/user_info.txt");
    if (!inFile.is_open()) {
        std::cout << "open failed..." << std::endl;
        return user;
    }

    inFile >> user.name;
    inFile >> user.pwd;

    inFile.close();
    return user;
}