//使用别名完成遍历
#include "my_using.h"
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    using int_array=int[4];
    //使用迭代器遍历
    for(int_array& p:arr)
    {
        for(int q:p)
        {
            cout<<q<<"  ";
        }
        cout<<endl;
    }
    //使用下标遍历
    for(size_t i=0;i<3;i++)
    {
        for(size_t j=0;j<4;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    //使用指针遍历
    for(int_array* p=arr;p!=arr+3;p++)
    {
        for(int *q=*p;q!=*p+4;q++)
        {
            cout<<*q<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
