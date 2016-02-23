//输入多个单词 重新组装成为字符串
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string total;
    for(string str;cin>>str;total+=str+' ');
    cout<<"The final string is: "<<total<<endl;
    return 0;
}
