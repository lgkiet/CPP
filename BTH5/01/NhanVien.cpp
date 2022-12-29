#include "NhanVien.h"

NhanVien::NhanVien() {}
NhanVien::~NhanVien() {}

void NhanVien::Nhap()
{
    cout << "\nNhap ho va ten: ";
    cin.ignore();
    getline(cin, hoTen);
    cout << "Nhap ngay sinh: ";
    getline(cin, ngaySinh);
}

void NhanVien::Xuat()
{
    cout << "\nHo ten: " << hoTen << endl;
    cout << "Ngay sinh: " << ngaySinh << endl;
}

// Nhan Vien San Xuat
NhanVienSX::NhanVienSX() {}
NhanVienSX::~NhanVienSX() {}

void NhanVienSX::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap luong can ban: ";
    cin >> luongCB;
    cout << "Nhap so san pham: ";
    cin >> soSP;
}

void NhanVienSX::Xuat()
{
    NhanVien::Xuat();
    cout << "Luong can ban: " << luongCB << endl;
    cout << "So san pham: " << soSP << endl;
    cout << "Luong: " << Luong() << endl;
}

long NhanVienSX::Luong()
{
    return this->luongCB + (this->soSP * 5000);
}

// Nhan Vien Van Phong
NhanVienVP::NhanVienVP() {}
NhanVienVP::~NhanVienVP() {}

void NhanVienVP::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so ngay lam viec: ";
    cin >> this->soNgayLamViec;
}

void NhanVienVP::Xuat()
{
    NhanVien::Xuat();
    cout << "So ngay lam viec: " << this->soNgayLamViec << endl;
    cout << "Luong: " << this->Luong() << endl;
}

long NhanVienVP::Luong()
{
    return this->soNgayLamViec * 100000;
}