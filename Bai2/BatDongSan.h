#pragma once
#include <iostream>
#include <string>
#include "Ngay.h"
using namespace std;

class BatDongSan
{
protected:
	string MaGD;
	Ngay NgayGD;
	int DonGia;
	double DienTich;
	
public:
	BatDongSan();
	~BatDongSan();
	virtual void Nhap();
	virtual void Xuat();
	virtual double ThanhTien();
	virtual int PhanLoai();
	virtual double getDienTich();
	virtual Ngay getNgayGD();
};

