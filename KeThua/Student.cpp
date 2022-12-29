#include "Student.h"

void Student::Nhap()
{
    People::Nhap();
    cout << "Nhap id: ";
    cin.ignore();
    getline(cin, studentID);
    cout << "Nhap diem Toan: ";
    cin >> this->diemToan;
    cout << "Nhap diem Anh: ";
    cin >> this->diemAnh;
}

void Student::Xuat()
{
    People::Xuat();
    cout << "Student's ID: " << this->studentID << endl;
    cout << "Diem Toan: " << this->diemToan << endl;
    cout << "Diem Anh: " << this->diemAnh << endl;
}