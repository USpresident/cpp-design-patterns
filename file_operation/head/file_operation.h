#ifndef FILE_OPERATION_H
#define FILE_OPERATION_H

#include <string>

class FileOperate {
public:
    virtual void openFile(std::string filePath) = 0;
    virtual void closeFile() = 0;
    virtual void dataOperation() = 0;
};

#endif