#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void change(int *x,int *y);
int main()
{
    int a = 1;
    int b = 2;
    int *p = &a;
    int *q = &b;
    change(p,q);
    cout << *p << *q << endl;
}

void change(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
