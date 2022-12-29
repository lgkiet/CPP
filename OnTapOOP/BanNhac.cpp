#include "BanNhac.h"

BanNhac::BanNhac()
{
    this->slKiHieu = 0;
    this->arr = new KiHieu *[slKiHieu];
}

BanNhac::~BanNhac()
{
    delete[] this->arr;
}

void BanNhac::Nhap()
{
    cout << "Nhap so luong ki hieu trong ban nhac: ";
    cin >> this->slKiHieu;
    this->arr = new KiHieu *[slKiHieu];
    int choice;
    for (int i = 0; i < this->slKiHieu; i++)
    {
        do
        {
            cout << "\n1. Not Nhac \t\t2. Dau Lang";
            cout << "\nNhap lua chon: ";
            cin >> choice;
            if (choice != 1 && choice != 2)
            {
                cout << "Wrong input ! ! !" << endl;
            }
        } while (choice != 1 && choice != 2);

        switch (choice)
        {
        case 1:
            arr[i] = new NotNhac;
            arr[i]->Nhap();
            break;
        case 2:
            arr[i] = new DauLang;
            arr[i]->Nhap();
            break;
        default:
            cout << "FAILED ! ! !" << endl;
            break;
        }
    }
}

void BanNhac::Xuat()
{
    cout << "\t\t\t >> Ban Nhac << " << endl;
    for (int i = 0; i < this->slKiHieu; i++)
    {
        arr[i]->Xuat();
    }
}

void BanNhac::Find_Count()
{
    int cnt = 0;
    cout << "Nhung vi tri co dau lang den trong ban nhac: ";
    for (int i = 0; i < this->slKiHieu; i++)
    {
        if (arr[i]->isDauLangDen())
        {
            cnt++;
            cout << i + 1 << " ";
        }
    }
    cout << "\nSo dau lang den trong ban nhac: " << cnt << endl;
}