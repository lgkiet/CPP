#include "BanDoc.h"

BanDoc::BanDoc()
{
    this->SDT = 0;
    this->SoSachDaMuon = 0;
    arr = new Sach *[SoSachDaMuon];
}

BanDoc::~BanDoc()
{
    delete[] this->arr;
}

void BanDoc::Nhap()
{
    cout << "\nNhap Ho Ten: ";
    getline(cin, this->HoTen);
    cout << "Nhap CMND: ";
    getline(cin, this->CMND);
    cout << "Nhap So dien thoai: ";
    cin >> this->SDT;
    do
    {
        cout << "Nhap so sach: ";
        cin >> this->SoSachDaMuon;
        if (this->SoSachDaMuon > 4)
            cout << "Khong duoc muon qua 4 cuon sach ! ! !" << endl;
    } while (this->SoSachDaMuon > 4);
    this->arr = new Sach *[SoSachDaMuon];
    int choice;
    for (int i = 0; i < this->SoSachDaMuon; i++)
    {
        cout << "\t\t\t >> Nhap Sach #" << i + 1 << " <<" << endl;
        cout << "Nhap The loai Sach: 1. Sach Giao Khoa. || 2. Sach Tieu Thuyet. " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cin.ignore();
            this->arr[i] = new SachGiaoKhoa;
            this->arr[i]->Nhap();
            break;
        case 2:
            cin.ignore();
            this->arr[i] = new TieuThuyet;
            this->arr[i]->Nhap();
            break;
        default:
            cout << "Khong hop le ! ! !" << endl;
            i--;
        }
    }
}

void BanDoc::Xuat()
{
    cout << "\nHo Ten: " << this->HoTen << endl;
    cout << "CMND: " << this->CMND << endl;
    cout << "So dien thoai: " << this->SDT << endl;
    cout << "\t\t\t >> Thong tin muon sach << " << endl;
    cout << "So sach da muon: " << this->SoSachDaMuon << endl;
    for (int i = 0; i < this->SoSachDaMuon; i++)
    {
        cout << "======================= Sach #" << i + 1 << " =======================" << endl;
        arr[i]->Xuat();
    }
}
