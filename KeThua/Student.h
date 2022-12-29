#pragma once
#include "People.h"

class Student : public People
{
private:
    string studentID;
    int diemToan;
    int diemAnh;
public:
    void Nhap();
    void Xuat();
};
