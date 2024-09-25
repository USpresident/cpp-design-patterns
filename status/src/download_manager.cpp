#include "download_manager.h"
#include "normal_state.h"
#include "repeated_state.h"
#include "spite_state.h"
#include "black_state.h"

DownloadManager::~DownloadManager()
{
    delete m_state;
}

std::map<std::string, std::string> DownloadManager::GetItem()
{
    return m_downloadItem;
}

void DownloadManager::Download(const std::string &username, const std::string &item)
{
    int downloadTimes = DownloadTimes(username, item);

    if (downloadTimes == 1) {
        m_state = new NormalState();
    } else if ((downloadTimes > 1) && (downloadTimes < 3)) {
        m_state = new RepeatedState();
    } else if ((downloadTimes >= 3) && (downloadTimes < 5)) {
        m_state = new SpiteState();
    } else {
        m_state = new BlackState();
    }

    m_state->Download(username, item, this);
}

int DownloadManager::DownloadTimes(const std::string &username, const std::string &item)
{
    auto iter = m_downloadCount.find(username);
    int downloadTimes = 0;
    if (iter == m_downloadCount.end()) {
        m_downloadCount[username] = 1;
        downloadTimes = 1;
    } else {
        ++(iter->second);
        downloadTimes = iter->second;
    }

    return downloadTimes;
}