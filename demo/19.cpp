#include <iostream>
#include <string>
using namespace std;
struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
int main()
{
    Sales_data total;
    if(cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data next;
        while(cin >> next.bookNo >> next.units_sold >> next.revenue)
        {
            if(next.bookNo == total.bookNo)
            {
                total.units_sold += next.units_sold;
                total.revenue += next.revenue;
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = next;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else
    {
        cout << cerr << "No data!" << endl;
        return -1;
    }
    return 0;
}
