#include "head/Student.h"
#include <fstream>
#include <iostream>

int main()
{
    std::string filePath = "/code/cpp-design-patterns/file_operation/data/file_binary_data.dat";
    std::ifstream inFile(filePath, std::ios::in | std::ios::binary); // 默认 std::ios::in
    if (!inFile.is_open()) {
        return -1;
    }

    Student stu;
    std::cout << "sizeof(stu) = " << sizeof(stu) <<
        ", sizeof(Student) = " << sizeof(Student) << std::endl;
    while (inFile.read(reinterpret_cast<char *>(&stu), sizeof(Student))) {
        std::cout << "no: " << stu.no <<
            ", name: " << stu.name <<
            ", age: " << stu.age <<
            ", score: " << stu.score << std::endl;
    }

    inFile.close();

    return 0;
}