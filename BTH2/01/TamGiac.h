#pragma once
#include "Point.h"
class TamGiac
{
private:
	Point a, b, c;

public:
	TamGiac();
	TamGiac(Point a, Point b, Point c);
	TamGiac(const TamGiac& A);
	void Nhap();
	void Xuat();
	void TinhTien(float xx, float yy);
	Point TrongTam();
};

