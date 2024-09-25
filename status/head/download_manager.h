#ifndef DOWNLOAD_MANAGER_H
#define DOWNLOAD_MANAGER_H

#include "download_state.h"
#include <string>
#include <map>

class DownloadManager {
public:
    ~DownloadManager();

    std::map<std::string, std::string> GetItem();

    void Download(const std::string &username, const std::string &item);

private:
    int DownloadTimes(const std::string &username, const std::string &item);

private:
    DownloadState *m_state{nullptr};
    std::map<std::string, int> m_downloadCount{};
    std::map<std::string, std::string> m_downloadItem{};
};

#endif