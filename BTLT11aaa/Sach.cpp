#include "Sach.h"

Sach::Sach() {}
Sach::~Sach() {}

void Sach::Nhap()
{
    cout << "Nhap ten Sach: ";
    getline(cin, this->TenSach);
    cout << "Nhap ten Tac Gia: ";
    getline(cin, this->TacGia);
}

void Sach::Xuat()
{
    cout << "\nTen sach: " << this->TenSach << endl;
    cout << "Tac Gia: " << this->TacGia << endl;
}