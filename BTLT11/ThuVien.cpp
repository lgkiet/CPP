#include "ThuVien.h"

ThuVien::ThuVien()
{
    this->soLuongBanDoc = 0;
    DS = new BanDoc[soLuongBanDoc];
}
ThuVien::~ThuVien()
{
    delete[] this->DS;
}

void ThuVien::Nhap()
{
    cout << "Nhap so luong ban doc: ";
    cin >> this->soLuongBanDoc;
    DS = new BanDoc[soLuongBanDoc];
    for (int i = 0; i < soLuongBanDoc; i++)
    {
        cin.ignore();
        cout << " >> Nhap ban thu " << i + 1 << ": " << endl;
        DS[i].Nhap();
    }
}

void ThuVien::Xuat()
{
    cout << "So luong ban doc: " << this->soLuongBanDoc << endl;
    for (int i = 0; i < this->soLuongBanDoc; i++)
    {
        cout << "\n\t\tBan doc thu " << i + 1 << endl;
        DS[i].Xuat();
    }
}