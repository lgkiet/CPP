#pragma once
#include "Point.h"
#include "CRectangle.h"
#include <iostream>
using namespace std;

class CRectangle;
class CCircle
{
private:
    Point center;
    float radius;

public:
    void Nhap();
    void Xuat();
    float Area();
    friend float area(CCircle a, CRectangle b);
};