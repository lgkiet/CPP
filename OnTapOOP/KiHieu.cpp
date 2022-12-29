#include "KiHieu.h"

KiHieu::KiHieu()
{
    this->TruongDo = 0;
}

KiHieu::~KiHieu()
{
}

void KiHieu::Nhap()
{
    int choice;
    cout << "\nNhap hinh not de xac dinh truong do: ";
    cout << "\n\t1. Not tron";
    cout << "\n\t2. Not den";
    cout << "\n\t3. Not trang";
    cout << "\n\t4. Not moc don";
    cout << "\n\t5. Not moc kep";
    cout << "\n\t6. Not moc tam";
    cout << "\n\t7. Not moc tu" << endl;
    cout << "Lua chon: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        this->TruongDo = 4;
        break;
    case 2:
        this->TruongDo = 1;
        break;
    case 3:
        this->TruongDo = 2;
        break;
    case 4:
        this->TruongDo = 0.5;
        break;
    case 5:
        this->TruongDo = 0.25;
        break;
    case 6:
        this->TruongDo = 0.125;
        break;
    case 7:
        this->TruongDo = 0.0625;
        break;
    default:
        cout << "Khong ton tai hinh not ! ! !" << endl;
    }
}

void KiHieu::Xuat()
{
    cout << this->TruongDo;
}

bool KiHieu::isDauLangDen()
{
    return false;
}
