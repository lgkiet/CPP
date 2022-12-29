#pragma once
#include "Point.h"
#include "CCircle.h"
#include <iostream>
using namespace std;
class CCircle;
class CRectangle
{
private:
    float Width;
    float Length;

public:
    void Nhap();
    void Xuat();
    float Area();
    friend float area(CCircle a, CRectangle b);
};