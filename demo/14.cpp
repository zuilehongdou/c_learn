#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    const vector<string> letter{ "F", "D", "C", "B", "A", "A++" };
    int grade;
    while(cin>>grade)
    {
        string letter_grade;
        if(grade<60)
        {
            letter_grade += letter[0];
        }
        else
        {
            letter_grade += letter[(grade - 50) / 10];
        }
        cout << letter_grade << endl;
    }
    return 0;
}
