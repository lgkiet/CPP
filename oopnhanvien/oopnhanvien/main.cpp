#include <iostream>
#include "CNhanVien.h"
#include "CNhanVienSanXuat.h"
#include "CNhanVienVanPhong.h"
#include "CCongTy.h"
using namespace std;

CNhanVien **Nhap(int &n)
{
    cout << "Nhap tong so nhan vien: ";
    cin >> n;
    CNhanVien **DS = new CNhanVien *[n];
    for (int i = 0; i < n; i++)
    {
        int loai;
        cout << "Nhap loai nhan Vien (1: Nhan vien san xuat, 2: Nhan vien van phong): ";
        cin >> loai;
        while (loai != 1 && loai != 2)
        {
            cout << "Nhap lai loai nhan vien: ";
            cin >> loai;
        }
        if (loai == 1)
        {
            cin.ignore();
            DS[i] = new CNhanVienSanXuat;
            ((CNhanVienSanXuat *)DS[i])->Nhap();
        }
        else if (loai == 2)
        {
            cin.ignore();
            DS[i] = new CNhanVienVanPhong;
            ((CNhanVienVanPhong *)DS[i])->Nhap();
        }
    }
    return DS;
}

void Xuat(CNhanVien **DS, int n)
{
    int iTongLuong = 0, iMaxLuong = 0, iMinLuong = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhan Vien So " << i + 1 << ":\n";
        DS[i]->Xuat();
        iTongLuong += DS[i]->TinhLuong();
        if (DS[i]->TinhLuong() > DS[iMaxLuong]->TinhLuong())
            iMaxLuong = i;
        if (DS[i]->TinhLuong() < DS[iMinLuong]->TinhLuong())
            iMinLuong = i;
    }
    cout << "Tong Luong: " << iTongLuong << "\n";
    cout << "Nhan vien luong cao nhat:\n";
    DS[iMaxLuong]->Xuat();
    cout << "Nhan vien luong thap nhat:\n";
    DS[iMinLuong]->Xuat();
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (DS[i]->TinhLuong() < DS[j]->TinhLuong())
                swap(DS[i], DS[j]);
    cout << "Danh sach sau sap xep la:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Nhan Vien So " << i + 1 << ":\n";
        DS[i]->Xuat();
    }
}

int main()
{

    CCongTy a;
    a.Nhap();
    a.Xuat();
    return 0;
}