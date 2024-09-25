#include "spite_state.h"
#include <iostream>

void SpiteState::Download(const std::string &username, const std::string &item,
        DownloadManager *manager)
{
    std::cout << "下载过于频繁，将取消下载资格..." << std::endl;
}