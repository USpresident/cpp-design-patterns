#ifndef ORIGINAL_WORD_H
#define ORIGINAL_WORD_H

#include "momento.h"
#include <string>

class OriginalWord {
public:
    OriginalWord(std::string strWord);

    /**
     * 存档
     */
    Momento *SaveWords();

    /**
     * 恢复存档
     */
    void recycleWords(Momento *momento);

    void showWords();

private:
    std::string m_strWord;
};



#endif