#include "Ngay.h"

Ngay::Ngay()
{
	dd = 0;
	mm = 0;
	yy = 0;
}

Ngay::~Ngay()
{

}

istream& operator>>(istream& is, Ngay& a)
{
	cout << "Nhap ngay/thang/nam: ";
	is >> a.dd >> a.mm >> a.yy;
	return is;
}

ostream& operator<<(ostream& os, Ngay a)
{
	os << a.dd << "/" << a.mm << "/" << a.yy;
	return os;
}

bool operator==(Ngay a, Ngay b)
{
	if (a.dd == b.dd && a.mm == b.mm && a.yy == b.yy)
		return true;
	return false;
}