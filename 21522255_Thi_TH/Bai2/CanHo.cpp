#include "CanHo.h"

CanHo::CanHo()
{
	this->LoaiCanHo = 0;
}

CanHo::~CanHo()
{

}

void CanHo::Nhap()
{
	BatDongSan::Nhap();
	cout << "Nhap loai Can Ho (1. Studio | 2. 2PN | 3. 3PN): ";
	cin >> this->LoaiCanHo;
}

void CanHo::Xuat()
{
	BatDongSan::Xuat();
}

double CanHo::ThanhTien()
{
	if (LoaiCanHo == 1)
	{
		return (this->DienTich * this->DonGia * 1.1);
	}
	if (LoaiCanHo == 2 || LoaiCanHo == 3)
	{
		return (this->DienTich * this->DonGia);
	}
}

int CanHo::PhanLoai()
{
	return 2;
}

double CanHo::getDienTich()
{
	return this->DienTich;
}

Ngay CanHo::getNgayGD()
{
	return this->NgayGD;
}