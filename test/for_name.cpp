//
// Created by Admin on 2019/1/22.
//

#include "for_name.h"
#include <iostream>
using namespace std;

void funn(){


    int my_array[5] = {1, 2, 3, 4, 5};
// 每个数组元素乘于 2
    for (int &x : my_array)
    {
        x *= 2;
        cout << x << endl;
    }
// auto 类型也是 C++11 新标准中的，用来自动获取变量的类型
    for (auto &x : my_array) {
        x *= 2;
        cout << "x" << endl;
        cout << x << endl;
    }


}


