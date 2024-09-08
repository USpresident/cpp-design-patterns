#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student {
    int no;
    char name[10]; // 二进制 不能使用std::string
    int age;
    int score;
};

#endif