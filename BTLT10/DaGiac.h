#pragma once
#include "Point.h"
#include <time.h>
#include <vector>
class DaGiac
{
protected:
	int n;
	Point* a;
public:
	DaGiac();
	DaGiac(int n);
	~DaGiac();
	DaGiac(const DaGiac& D);
	void Nhap();
	void Xuat();
	void TinhTien(float xx, float yy);
	Point TrongTam();
};
