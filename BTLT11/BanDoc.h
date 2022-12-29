#pragma once
#include "Sach.h"
using namespace std;

class BanDoc
{
private:
    string HoTen;
    string CMND;
    long long SDT;
    int SoSachDaMuon;
    Sach **arr;

public:
    BanDoc();
    ~BanDoc();
    void Nhap();
    void Xuat();
};
