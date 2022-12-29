#include <iostream>

using namespace std;

bool checkYear(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 4 == 0 && year % 100 != 0)
        return true;
    return false;
}

int main()
{

    int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year, month, day;
    cin >> day >> month >> year;

    if (year <= 0)
    {
        cout << "Ngay khong hop le !!!" << endl;
    }
    else
    {
        if (checkYear(year))
        {
            m[1]++;
        }
        if (month <= 0 || month > 12)
        {
            cout << "Ngay khong hop le !!!" << endl;
        }
        else
        {
            if (day <= 0 || day > m[month - 1])
            {
                cout << "Ngay khong hop le !!!" << endl;
            }
        }
    }

    return 0;
}