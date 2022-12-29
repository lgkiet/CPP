#include "People.h"

void People::Nhap()
{
    cout << "Nhap ho ten: ";
    getline(cin, this->name);
    cout << "Nhap tuoi: ";
    cin >> this->age;
}

void People::Xuat()
{
    cout << "Name: " << this->name << endl;
    cout << "Age: " << this->age << endl;
}