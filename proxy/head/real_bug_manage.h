#ifndef REAL_BUG_MANAGE_H
#define REAL_BUG_MANAGE_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>

class RealBugManage {
public:
    static RealBugManage &getInstance();

    void getBug();

    void showBug();

private:
    RealBugManage() {}
    RealBugManage(const RealBugManage &) = delete;
    RealBugManage& operator=(const RealBugManage&) = delete;

    std::vector<std::string> getBug(std::string line);

private:
    std::map<int, std::vector<std::string>> m_cache{};
};

#endif