#include "CongTy.h"

CongTy::CongTy()
{
    this->soLuongNV = 0;
    arr = new NhanVien *[this->soLuongNV];
}

CongTy::~CongTy()
{
    delete[] arr;
}

void CongTy::Nhap()
{
    cout << "Nhap so luong nhan vien: ";
    cin >> this->soLuongNV;
    arr = new NhanVien *[this->soLuongNV];
    int choice = 0;
    for (int i = 0; i < this->soLuongNV; i++)
    {
        cout << "\t\t\tNhap nhan vien thu " << i + 1 << endl;
        cout << "\t1. Nhan Vien San Xuat" << endl;
        cout << "\t2. Nhap Vien Van Phong" << endl;
        cout << "Nhap lua chon: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            arr[i] = new NhanVienSX;
            arr[i]->Nhap();
            break;
        case 2:
            arr[i] = new NhanVienVP;
            arr[i]->Nhap();
            break;
        default:
            cout << "Sai lua chon !!! Nhap lai..." << endl;
            i--;
        }
    }
}

void CongTy::Xuat()
{
    cout << "========================= OUTPUT =========================" << endl;
    cout << "\nSo luong nhan vien: " << this->soLuongNV << endl;
    for (int i = 0; i < this->soLuongNV; i++)
    {
        cout << "\n========================= NHAN VIEN THU " << i + 1 << " =========================" << endl;
        arr[i]->Xuat();
    }
}