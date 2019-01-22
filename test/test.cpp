//
// Created by Admin on 2019/1/22.
//
#include <iostream>
#include "test.h"

Circle::Circle() {
    this->r = 5.0;
    this->r = 55;
}

Circle::Circle(double R) {
    this->r = R;
}

double Circle::Area() {
    return 3.14 * r * r;
}

void func() {
    static int i = 5; // 局部静态变量
    count--;
    i++;
    std::cout << "变量 i 为 " << i;
    std::cout << " , 变量 count 为 " << count << std::endl;
}
