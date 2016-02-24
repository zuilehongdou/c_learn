#include <iostream>
using namespace std;
int fact(int i);
int main()
{
    int num;
    while(cin >> num)
    {
        cout << fact(num) << endl;
    }
    return 0;
}
    
//构建阶乘函数
int fact(int i)
{
    int temp=1;
    while(i > 1)
    {
        temp = temp * i--;
    }
    return temp;
}
