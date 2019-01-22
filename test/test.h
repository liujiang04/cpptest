//
// Created by Admin on 2019/1/22.
//

#ifndef CPPTEST_TEST_H
#define CPPTEST_TEST_H
static int count = 10; /* 全局变量 */
void func();
class Circle
{
public:
    double r;//半径
    int dd = 555;

public:
    Circle();//构造函数
    Circle(double R);//构造函数
    double Area();//求面积函数
};

#endif //CPPTEST_TEST_H


