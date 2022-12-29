#pragma once
#include <iostream>
using namespace std;
class Ngay
{
private:
	int dd, mm, yy;
public:
	Ngay();
	~Ngay();
	friend istream& operator>>(istream& is, Ngay& a);
	friend ostream& operator<<(ostream& os, Ngay a);
	friend bool operator==(Ngay a, Ngay b);
};

