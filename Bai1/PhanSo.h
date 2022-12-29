#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
	int TuSo, MauSo;

public:
	PhanSo();
	PhanSo(int n) : TuSo(n), MauSo(1){};
	PhanSo(const PhanSo &a) : TuSo(a.TuSo), MauSo(a.MauSo){};
	~PhanSo();
	friend istream &operator>>(istream &is, PhanSo &a);
	friend ostream &operator<<(ostream &os, PhanSo a);
	PhanSo operator+(const PhanSo &a);
	PhanSo operator-(const PhanSo &b);
};
