#ifndef PROXY_BUG_MANAGE_H
#define PROXY_BUG_MANAGE_H

#include "real_bug_manage.h"
#include <iostream>

class ProxyBugManage {
public:
    void getBug();

private:
    bool m_reaload {false}; // true表示从缓存取的，false是从
};

#endif