#include <fstream>
#include <iostream>

int main()
{
    std::string filePath = "/code/cpp-design-patterns/file_operation/data/file_str_data.txt";
    std::ofstream outFile(filePath, std::ios::app);
    if (!outFile.is_open()) {
        return -1;
    }

    outFile << "\n白日依山尽，\n";
    outFile << "黄河入海流。\n";
    outFile << "欲穷千里目，\n";
    outFile << "更上一层楼。\n";
    outFile << "       ----- 登鹳雀楼\n";

    outFile.close();

    return 0;
}
