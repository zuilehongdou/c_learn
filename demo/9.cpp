//比较两个字符串的长度
#include <iostream>
using namespace std;
int main()
{
    for(string str1,str2;getline(cin,str1),getline(cin,str2);)
    {
        if(str1.size() == str2.size())
        {
            cout<<"These two string have the same length"<<endl;
        }
        else
        {
            cout<<"The longer string is: "<<((str1.size() > str2.size()) ? str1 : str2)<<endl;
        }
    }
    return 0;
}
