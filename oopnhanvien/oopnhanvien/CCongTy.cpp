#include "CCongTy.h"

void CCongTy::Nhap()
{
    cout << "Nhap tong so nhan vien: ";
    cin >> size;
    DS = new CNhanVien *[size];
    for (int i = 0; i < size; i++)
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
            DS[i]->Nhap();
        }
        else if (loai == 2)
        {
            cin.ignore();
            DS[i] = new CNhanVienVanPhong;
            DS[i]->Nhap();
        }
    }
}
void CCongTy::Xuat()
{
    for (int i = 0; i < size; i++)
    {
        cout << "Nhan Vien So " << i + 1 << ":\n";
        DS[i]->Xuat();
    }
}