#ifndef NORMAL_STATE_H
#define NORMAL_STATE_H

#include "download_state.h"

class NormalState : public DownloadState {
public:
    void Download(const std::string &username, const std::string &item,
        DownloadManager *manager) override;
};

#endif