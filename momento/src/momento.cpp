#include "momento.h"

Momento::Momento(std::string strWord) : m_strWord(strWord) {}

std::string Momento::GetWords()
{
    return m_strWord;
}