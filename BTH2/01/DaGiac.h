#pragma once
#include "Point.h"
#include <time.h>
#include <vector>
class DaGiac
{
private:
	int n;
	Point* a = new Point[n];
public:
	DaGiac();
	DaGiac(int n);
	DaGiac(const DaGiac& D);
	void Nhap();
	void Xuat();
	void TinhTien(float xx, float yy);
	Point TrongTam();
};

