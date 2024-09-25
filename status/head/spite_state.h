#ifndef SPITE_STATE_H
#define SPITE_STATE_H

#include "download_state.h"

class SpiteState : public DownloadState {
public:
    void Download(const std::string &username, const std::string &item,
        DownloadManager *manager) override;
};

#endif