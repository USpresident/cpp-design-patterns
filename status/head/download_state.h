#ifndef DOWNLOAD_STATE_H
#define DOWNLOAD_STATE_H

#include <string>

class DownloadManager;

class DownloadState {
public:
    virtual void Download(const std::string &username, const std::string &item,
        DownloadManager *manager) = 0;
protected:
    DownloadState();
};

#endif