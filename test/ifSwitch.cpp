//
// Created by Admin on 2019/1/22.
//

#include "ifSwitch.h"
#include <iostream>
using namespace std;

void funcIf(){

// 局部变量声明
    char grade = 'D';

    switch(grade)
    {
        case 'A' :
            cout << "很棒！" << endl;
            break;
        case 'B' :
        case 'C' :
            cout << "做得好" << endl;
            break;
        case 'D' :
            cout << "您通过了" << endl;
            break;
        case 'F' :
            cout << "最好再试一下" << endl;
            break;
        default :
            cout << "无效的成绩" << endl;
    }
    cout << "您的成绩是 " << grade << endl;

}