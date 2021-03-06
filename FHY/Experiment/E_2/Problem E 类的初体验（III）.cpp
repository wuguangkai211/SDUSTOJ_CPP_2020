#include <iostream>
#include <iomanip>
using namespace std;

class Data
{
private:
    double _num;
public:
      Data(double d):_num(d){cout << "Initialize a data "<< _num << endl;}
      Data():_num(0){cout << "Initialize a data "<< _num << endl;}

      double getValue()
      {
            return _num;
      }

      void showValue()
      {
            cout<< _num <<endl;
      }

};

int main()
{
    Data data1;
    double d;
    cin>>d;
    Data data(d);
    cout<<data.getValue()<<endl;
    data.showValue();
}
/* 
Problem E: 类的初体验（III）
Time Limit: 1 Sec  Memory Limit: 128 MB
Submit: 4111  Solved: 3314
[Submit][Status]
Description
定义一个类Data，只有一个double类型的属性和如下4个方法：
1.   缺省构造函数，将属性初始化为0，并输出“Initialize a data 0”。

2.  带参构造函数，将属性初始化为指定参数，并输出“Initialize a data #”，其中“#”即参数值。

2.   double getValue()——获得属性值。

3.    void showValue()——显示属性值。

Input
一个double类型的数值。

Output
见样例。

Sample Input
3.14
Sample Output
Initialize a data 0
Initialize a data 3.14
3.14
3.14
HINT
Append Code
append.cc, */