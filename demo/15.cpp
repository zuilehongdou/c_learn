#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    const vector<string> scores{"F", "D", "C", "B", "A", "A++" };
    int grade = 0;
    while(cin >> grade)
    {
        string letter_grade;
        letter_grade = (grade<60) ? scores[0] : scores[(grade - 50) / 10];
        cout << letter_grade << endl;
    }
    return 0;
}
