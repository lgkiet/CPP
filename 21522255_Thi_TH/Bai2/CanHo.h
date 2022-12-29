#pragma once
#include "BatDongSan.h"

class CanHo : public BatDongSan
{
private:
	int LoaiCanHo;
public:
	CanHo();
	~CanHo();
	void Nhap();
	void Xuat();
	double ThanhTien();
	int PhanLoai();
	double getDienTich();
	Ngay getNgayGD();
};