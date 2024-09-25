#include "repeated_state.h"
#include <iostream>

void RepeatedState::Download(const std::string &username, const std::string &item,
        DownloadManager *manager)
{
    std::cout << "请不要重复下载资源..." << std::endl;
}