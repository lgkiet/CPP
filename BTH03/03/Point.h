#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	Point();
	Point(int x, int y);
	Point(const Point &a);
	void Nhap();
	void Xuat();
	void set_X(int x);
	void set_Y(int y);
	void TinhTien(int xx, int yy);
	int get_Xaxis();
	int get_Yaxis();
	friend float Distance(Point a, Point b);
};
