#include "PhanSo.h"

PhanSo::PhanSo()
{
	this->TuSo = 1;
	this->MauSo = 1;
}
PhanSo::~PhanSo()
{

}

istream& operator>>(istream& is, PhanSo& a)
{
	cout << "Nhap Tu So: ";
	is >> a.TuSo;
	cout << "Nhap Mau So: ";
	is >> a.MauSo;
	return is;
}

ostream& operator<<(ostream& os, PhanSo a)
{
	os << a.TuSo << "/" << a.MauSo << endl;
	return os;
}

PhanSo PhanSo::operator+(const PhanSo& a)
{
	PhanSo kq;
	kq.TuSo = this->TuSo * a.MauSo + a.TuSo * this->MauSo;
	kq.MauSo = this->MauSo * a.MauSo;
	return kq;
}

PhanSo PhanSo::operator-(const PhanSo& a)
{
	PhanSo kq;
	kq.TuSo = this->TuSo * a.MauSo - a.TuSo * this->MauSo;
	kq.MauSo = this->MauSo * a.MauSo;
	return kq;
}