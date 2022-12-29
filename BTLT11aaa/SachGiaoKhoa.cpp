#include "SachGiaoKhoa.h"

SachGiaoKhoa::SachGiaoKhoa() {}
SachGiaoKhoa::~SachGiaoKhoa() {}

void SachGiaoKhoa::Nhap()
{
    Sach::Nhap();
    cout << "Nhap mon hoc: ";
    getline(cin, this->MonHoc);
    cout << "Nhap lop: ";
    cin >> this->Lop;
}

void SachGiaoKhoa::Xuat()
{
    Sach::Xuat();
    cout << "SGK Mon: " << this->MonHoc << endl;
    cout << "SGK Lop: " << this->Lop << endl;
}