#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

class Elip
{
protected:
    Point center;
    double longAxis, shortAxis;
public:
    Elip();
    Elip(Point _c, double _longAxis, double _shortAxis)
    : center(_c), longAxis(_longAxis), shortAxis(_shortAxis){};
    void Nhap();
    void Xuat();
};

class Circle : public Elip
{
public:
    Circle();
    Circle(Point _c): Elip(_c, 4, 4){};
    void Nhap(){
        cout << "Nhap tam hinh tron: ";
        center.Nhap();
        cout << "Nhap ban kinh r: ";
        cin >> this->longAxis;
        shortAxis = longAxis;
    };
    void Xuat();
  
};