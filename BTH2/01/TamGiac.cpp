#include "TamGiac.h"
#include "Point.h"

TamGiac::TamGiac()
{
	Point a(0, 0);
	this->a = a;
	Point b(3, 6);
	this->b = b;
	Point c(1, 2);
	this->c = c;
}

TamGiac::TamGiac(Point a, Point b, Point c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

TamGiac::TamGiac(const TamGiac& A)
{
	this->a = A.a;
	this->b = A.b;
	this->c = A.c;
}

void TamGiac::Nhap()
{
	cout << "Nhap a.." << endl;
	this->a.Nhap();
	cout << "Nhap b.." << endl;
	this->b.Nhap();
	cout << "Nhap c.." << endl;
	this->c.Nhap();
}

void TamGiac::Xuat()
{
	cout << "Toa do dinh a... " << endl;
	this->a.Xuat();
	cout << "Toa do dinh b... " << endl;
	this->b.Xuat();
	cout << "Toa do dinh c... " << endl;
	this->c.Xuat();
}

void TamGiac::TinhTien(float xx, float yy)
{
	this->a.TinhTien(xx, yy);
	this->b.TinhTien(xx, yy);
	this->c.TinhTien(xx, yy);
}

Point TamGiac::TrongTam()
{
	
	float xx = (a.get_Xaxis() + b.get_Xaxis() + c.get_Xaxis()) / 3;
	float yy = (a.get_Yaxis() + b.get_Yaxis() + c.get_Yaxis()) / 3;
	Point G(xx, yy);
	return G;
}