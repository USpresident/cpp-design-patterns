#ifndef MOMENTO_H
#define MOMENTO_H

#include <string>

class OriginalWord;

class Momento {
public:
    Momento(std::string strWord);
private:
    friend class OriginalWord;

    std::string GetWords();

private:
    std::string m_strWord;
};

#endif