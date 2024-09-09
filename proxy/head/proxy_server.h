#ifndef PROXY_SERVER_H
#define PROXY_SERVER_H

#include "abstract_server.h"
#include "real_server.h"

class ProxyServer : public IServer {
public:
    ProxyServer(const std::string name, const std::string pwd);

    ~ProxyServer();

    void Request() override;
private:
    UserInof getUserInfo();

private:
    UserInof m_userInfo{};
    IServer *m_isever{nullptr};
};

#endif