#pragma once
#include "DaGiac.h"
#include <iostream>
using namespace std;

class HinhChuNhat : public DaGiac
{
protected:
    bool Check();

public:
    HinhChuNhat();
    void Nhap();
};