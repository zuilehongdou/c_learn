#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void swap(int& a,int& b);
int main()
{
    for(int a = 0, b = 0; cout << "please enter two number!\n"; cin >> a >> b)
    {
        swap(a,b);
        cout << a << " " << b << endl;
    }
    return 0;
}

void swap(int& a,int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
