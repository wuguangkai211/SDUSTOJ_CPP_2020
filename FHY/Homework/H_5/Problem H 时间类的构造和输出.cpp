#include <bits/stdc++.h>
using namespace std;

class Time
{
private:
    int h$, m$, s$;
public:
    Time(int h, int m, int s):h$(h), m$(m), s$(s){}
    void showTime()const;
};
void Time::showTime()const
{
    cout << setw(2) << setfill('0') << h$ << ':' << setw(2) << setfill('0') << m$ << ':' << setw(2) << setfill('0') << s$ << endl;
}


int main()
{
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        int hour, minute, second;
        cin>>hour>>minute>>second;
        Time t(hour, minute, second);
        t.showTime();
    }
}



//Problem H: 时间类的构造和输出
//Time Limit: 4 Sec  Memory Limit: 128 MB
//Submit: 6223  Solved: 4974
//[Submit][Status]
//Description
//封装一个时间类Time，用于时间处理的相关功能，支持以下操作：
//1. Time::Time(int,int,int)构造方法：传递时分秒的三个参数构造对象。
//2. Time::showTime()方法：输出“hh:mm:ss”，不足两位的要前面补0。
//你设计一个时间类Time，使得main()函数能够正确运行。
//函数调用格式见append.cc。
//append.cc中已给出main()函数。
//Input
//输入的第一个整数n，表示有n组测试数据，每组3个整数：hh,mm,ss，分别表示时、分、秒，其值都在合法的时间范围内。
//Output
//每组测试数据对应一组输出“hh:mm:ss”，不足两位的输出需要前面补0，格式见sample。
//Sample Input
//5
//0 0 1
//0 59 59
//1 1 1
//23 0 0
//23 59 59
//Sample Output
//00:00:01
//00:59:59
//01:01:01
//23:00:00
//23:59:59
//HINT
//输出格式用头文件<iomanip>中流操作算子：
//
//setw(w)   ：设置数据的输出宽度为w个字符
//
//setfill(c)：设置用字符c作为填充字符
//
//Append Code
//append.cc,
