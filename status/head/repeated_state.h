#ifndef REPEATED_STATE_H
#define REPEATED_STATE_H

#include "download_state.h"

class RepeatedState : public DownloadState {
public:
    void Download(const std::string &username, const std::string &item,
        DownloadManager *manager) override;
};

#endif