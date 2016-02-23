#include "my_using.h"
int main()
{
    vector<int> num{1,2,3,4,5,6};
    int arr[6]={0};
    int i=0;
    for(i=0;i<6;i++)
    {
        arr[i]=num[i];
    }
    for(auto n:arr)
    {
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}
