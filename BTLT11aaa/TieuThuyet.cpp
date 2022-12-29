#include "TieuThuyet.h"

TieuThuyet::TieuThuyet() {}
TieuThuyet::~TieuThuyet() {}

void TieuThuyet::Nhap()
{
    Sach::Nhap();
    cout << "Nhap The Loai: ";
    getline(cin, this->TheLoai);
    cout << "Nhap Nam xuat ban: ";
    cin >> this->NamXB;
}

void TieuThuyet::Xuat()
{
    Sach::Xuat();
    cout << "The loai: " << this->TheLoai << endl;
    cout << "Nam xuat ban: " << this->NamXB << endl;
}