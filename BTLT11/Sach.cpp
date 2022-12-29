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