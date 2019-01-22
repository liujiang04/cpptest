#include <iostream>
#include <map>
#include <string>
#include "test/test.h"
#include "test/for_name.h"
#include "test/ifSwitch.h"

using namespace std;
// 函数声明

int main() {

    std::cout << "Hello, World!" << std::endl;
    Circle c(3);
    std::cout << "Area=" << c.Area() << std::endl;

    cout << c.dd << endl;
    map<int, string> mapStudent;
    string s;//声明一个string 对象
    s = "ssbb";
    mapStudent.insert(pair<int, string>(1, "student_one"));
    mapStudent.insert(pair<int, string>(2, "student_two"));
    mapStudent.insert(pair<int, string>(3, "student_three"));
    cout << mapStudent.size() << endl;
    cout << s << endl;
    const string ss = "ss";
    if (true) {
        cout << ss << endl;
    }
    auto sss = "testest";
    cout << ss.size() << endl;
    int dd = 5;
    while (dd--) {
        func();
    }

    // for 循环执行
    for (int a = 10; a < 20; a = a + 1) {
        cout << "a 的值：" << a << endl;
    }
    funn();
    funcIf();
    //三元
    auto res = sss == "testest" ? "TRUE"  : "FALSE";
    cout <<res << endl;

    // 设置种子
    srand( (unsigned)time( NULL ) );
    int i,j;
    /* 生成 10 个随机数 */
    for( i = 0; i < 10; i++ )
    {
        // 生成实际的随机数
        j= rand();
        cout <<"随机数： " << j << endl;
    }


    // 基于当前系统的当前日期/时间
    time_t now = time(0);
    // 把 now 转换为字符串形式
    char* dt = ctime(&now);
    cout << "本地日期和时间：" << dt << endl;
    // 把 now 转换为 tm 结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间："<< dt << endl;

    return 0;
}