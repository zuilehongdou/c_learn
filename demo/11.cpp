#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str("Hello,World!");
    for(auto &s:str)
    {
        s='X';
    }
    cout<<str<<endl;
    int i=0;
    while(i<str.size())
    {
        str[i++]='Y';
    }
    cout<<str<<endl;
    for(int j=0;j<str.size();j++)
    {
        str[j]='Z';
    }
    cout<<str<<endl;
    return 0;
}
