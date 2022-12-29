#pragma once
#include "BatDongSan.h"

class Nha : public BatDongSan
{
private:
	int LoaiNha;
public:
	Nha();
	~Nha();
	void Nhap();
	void Xuat();
	double ThanhTien();
	int PhanLoai();
	double getDienTich();
	Ngay getNgayGD();
};

