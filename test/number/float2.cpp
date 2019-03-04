//
// Created by Admin on 2019/3/4.
//

#include <iostream>
#include <math.h>
#include "float2.h"



void funcFloat() {
    std::cout << " float 测试 " << std::endl;
    float count = 50;
    float u_index = 100;

    float index = floor(u_index / (100 / count));
    float b = index * 100 / count;
    float xxx = 0.06;
    float y_now = floor(xxx * count);
    float y_base = index * -1 + b;
    if (y_now<y_base){
        std::cout << " 小 " << std::endl;
    }else{
        std::cout << " 大 " << std::endl;
    }
    std::cout << y_now << std::endl;
    std::cout << y_base << std::endl;

}
