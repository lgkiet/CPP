#include <iostream>
#include "BanNhac.h"
using namespace std;

int main()
{
    BanNhac a;
    a.Nhap();
    a.Xuat();

    cout << " HELLO " << endl;
    a.Find_Count();
    return 0;
}