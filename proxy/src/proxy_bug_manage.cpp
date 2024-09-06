#include "proxy_bug_manage.h"

void ProxyBugManage::getBug()
{
    if (m_reaload) {
        std::cout << "from cache..." << std::endl;
        RealBugManage::getInstance().showBug();
    } else {
        std::cout << "from reaload..." << std::endl;
        RealBugManage::getInstance().getBug();
        RealBugManage::getInstance().showBug();
        m_reaload = true;
    }
}