//多维数组的使用
#include "my_using.h"
int main()
{
    int arr[3][3]={0};
    for(size_t i=0;i<3;i++)
    {
        for(size_t j=0;j<3;j++)
        {
            arr[i][j]=i*3+j;
        }
    }
    for(auto &row:arr)
    {
        for(auto col:row)
        {
            cout<<col<<"  ";
        }
        cout<<endl;
    }
    for(auto i=begin(arr);i!=end(arr);i++)
    {
        for(auto j=begin(*i);j!=end(*i);j++)
        {
            cout<<*j<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
