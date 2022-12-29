#pragma once
#include <iostream>
using namespace std;

class Point
{
private:
	float x;
	float y;
public:
	Point();
	Point(float x, float y);
	Point(const Point& a);
	void Nhap();
	void Xuat();
	void set_X(int x);
	void set_Y(int y);
	void TinhTien(float xx, float yy);
	float get_Xaxis();
	float get_Yaxis();
};