#include "Point.h"

void Point::Nhap()
{
	cout << "Nhap hoanh do x: ";
	cin >> this->x;
	cout << "Nhap tung do y: ";
	cin >> this->y;
}
Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point &a)
{
	this->x = a.x;
	this->y = a.y;
}

void Point::Xuat()
{
	cout << "Toa do diem: (" << this->x << "," << this->y << ")" << endl
		 << endl;
}

void Point::set_X(int x)
{
	this->x = x;
}

void Point::set_Y(int y)
{
	this->y = y;
}

void Point::TinhTien(int xx, int yy)
{
	this->x += xx;
	this->y += yy;
}

int Point::get_Xaxis()
{
	return this->x;
}

int Point::get_Yaxis()
{
	return this->y;
}

float Distance(Point a, Point b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
