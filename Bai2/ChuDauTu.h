#pragma once
#include "BatDongSan.h"
#include "CanHo.h"
#include "Nha.h"

using namespace std;
class ChuDauTu
{
private:
	int SoGiaoDich;
	BatDongSan** arr;
public:
	ChuDauTu();
	~ChuDauTu();
	void Nhap();
	void Xuat();
	void TongThanhTien();
	void TongDienTich();
	void SoLuongTungSP();
	void TraCuuNgayGD();
};

