#include "real_bug_manage.h"

RealBugManage &RealBugManage::getInstance()
{
    static RealBugManage instance;
    return instance;
}

void RealBugManage::getBug()
{
    std::ifstream file("/code/cpp-design-patterns/proxy/data/test_data.txt");
    if (!file.is_open()) {
        std::cout << "open file failed..." << std::endl;
        return;
    }

    std::string line{};
    int index = 0;
    while (getline(file, line)) {
        m_cache[index] = getBug(line);
        ++index;
    }

    file.close();
}

void RealBugManage::showBug()
{
    for (int i = 0; i < m_cache.size(); ++i) {
        std::cout << i << "th row: ";
        for (auto it = m_cache[i].begin(); it != m_cache[i].end(); ++it) {
            std::cout << *it << " ";
        }

        std::cout << std::endl;
    }
}

std::vector<std::string> RealBugManage::getBug(std::string line)
{
    std::vector<std::string> res{};
    std::istringstream ss(line);
    while (!ss.eof()) {
        std::string word{};
        getline(ss, word, '|');
        res.emplace_back(word);
    } 
    return res;
}