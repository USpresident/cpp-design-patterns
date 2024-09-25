#include "download_manager.h"

int main()
{
    DownloadManager manager;
    for (int i = 0; i < 5; ++i) {
        manager.Download("lyc", "xiaoaojianghu");
    }
    return 0;
}