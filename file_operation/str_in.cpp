#include <fstream>
#include <iostream>

int main()
{
    std::string filePath = "/code/cpp-design-patterns/file_operation/data/file_str_data.txt";
    std::ifstream inFile(filePath, std::ios::in); // 默认 std::ios::in
    if (!inFile.is_open()) {
        return -1;
    }

    std::string line{};
    // 方式1：整行一次读取
    while (getline(inFile, line)) {
        std::cout << line << std::endl;
    }

    // 方式2：空格分段,读到空格处，空格后下一次读取
    // while (inFile >> line) {
    //     std::cout << line << std::endl;
    // }

    inFile.close();

    return 0;
}