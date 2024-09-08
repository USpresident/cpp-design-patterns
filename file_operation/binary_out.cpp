#include "head/Student.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

std::string i2str(int num)
{
    std::stringstream ss;
    ss << num;
    return ss.str();
}

int main()
{
    std::string filePath = "/code/cpp-design-patterns/file_operation/data/file_binary_data.dat";
    std::ofstream outFile(filePath, std::ios::out | std::ios::binary);
    if (!outFile.is_open()) {
        return -1;
    }

    int n = 5;
    for (int i = 1; i <= n; ++i) {
        Student s {i, "liuchao", 18+i, 95+i};
        outFile.write(reinterpret_cast<const char*>(&s), sizeof(Student));
    }

    outFile.close();

    return 0;
}
