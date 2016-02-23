//使用不同的方法遍历一个多维数组
#include "my_using.h"
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    //迭代器实现遍历，注意开始的声明是const int(&raw)[3]
    for(const int(&raw)[3]:arr)
    {
        for(int col:raw)
        {
            cout<<col<<"  ";
        }
        cout<<endl;
    }
    //使用下标进行遍历，注意类型为size_t
    for(size_t i=0;i<3;i++) 
    {
        for(size_t j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    //使用指针进行遍历
    for(int (*raw)[3]=arr;raw!=arr+3;raw++)
    {
        for(int *col=*raw;col!=*raw+3;col++)
        {
            cout<<*col<<"  ";
        }   
        cout<<endl;
    }
    return 0;
}
