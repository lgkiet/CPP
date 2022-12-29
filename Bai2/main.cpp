#include <iostream>
#include "ChuDauTu.h"
#include "BatDongSan.h"
#include "CanHo.h"
#include "Nha.h"

using namespace std;

int main()
{
	ChuDauTu a;
	a.Nhap();
	a.Xuat();

	a.TongThanhTien();
	a.TongDienTich();
	a.SoLuongTungSP();
	a.TraCuuNgayGD();



	return 0;
}