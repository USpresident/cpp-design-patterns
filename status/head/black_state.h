#ifndef BLACK_STATE_H
#define BLACK_STATE_H

#include "download_state.h"

class BlackState : public DownloadState {
public:
    void Download(const std::string &username, const std::string &item,
        DownloadManager *manager) override;
};

#endif