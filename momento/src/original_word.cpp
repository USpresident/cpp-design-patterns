#include "original_word.h"
#include <iostream>

OriginalWord::OriginalWord(std::string strWord) : m_strWord(strWord) {}

/**
 * 存档
 */
Momento *OriginalWord::SaveWords()
{
    return new Momento(m_strWord);
}

/**
 * 恢复存档
 */
void OriginalWord::recycleWords(Momento *momento)
{
    if (momento == nullptr) {
        return;
    }

    m_strWord = momento->GetWords();
    std::cout << "recycleWords ok........" << std::endl;
}

void OriginalWord::showWords()
{
    std::cout << m_strWord << std::endl;
}