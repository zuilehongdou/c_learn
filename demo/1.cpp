//用整型数组初始化一个vector对象
#include<iostream>
#include<string>
#include<vector>
int main()
{
    int arr[]={1,2,3,4,5,6};
    std::vector<int> num(std::begin(arr),std::end(arr));
    for(auto n:num)
    {
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
