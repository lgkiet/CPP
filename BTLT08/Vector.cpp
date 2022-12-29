#include "Vector.h"


float Vector::length()
{
	return sqrt(this->x * this->x + this->y * this->y);
}

istream& operator>>(istream& is, Vector& a)
{
	is >> a.x;
	is >> a.y;
	return is;
}

ostream& operator<<(ostream& os, Vector a)
{
	os << "(" << a.x << "," << a.y << ")";
	return os;
}

Vector operator+(Vector a, Vector b)
{
	Vector tong;
	tong.x = a.x + b.x;
	tong.y = a.y + b.y;
	return tong;
}

Vector operator-(Vector a, Vector b)
{
	Vector hieu;
	hieu.x = a.x - b.x;
	hieu.y = a.y - b.y;
	return hieu;
}

bool operator==(Vector a, Vector b)
{
	if (a.length() == b.length())
		return true;
	return false;
}

bool operator<(Vector a, Vector b)
{
	if (a.length() < b.length())
		return true;
	return false;
}

bool operator>(Vector a, Vector b)
{
	if (a.length() > b.length())
		return true;
	return false;
}

bool operator<=(Vector a, Vector b)
{
	if (a.length() <= b.length())
		return true;
	return false;
}

bool operator>=(Vector a, Vector b)
{
	if (a.length() >= b.length())
		return true;
	return false;
}

bool operator!=(Vector a, Vector b)
{
	if (a.length() != b.length())
		return true;
	return false;
}