#include "Nha.h"

Nha::Nha()
{
	this->LoaiNha = 0;
}

Nha::~Nha()
{

}

void Nha::Nhap()
{
	BatDongSan::Nhap();
	cout << "Nhap loai Can Ho (1. NhaPho | 2. BietThu): ";
	cin >> this->LoaiNha;
}

void Nha::Xuat()
{
	BatDongSan::Xuat();
}

double Nha::ThanhTien()
{
	if (LoaiNha == 1)
	{
		return (this->DienTich * this->DonGia);
	}
	if (LoaiNha == 2)
	{
		return (this->DienTich * this->DonGia * 1.5);
	}
}

int Nha::PhanLoai()
{
	return 1;
}

double Nha::getDienTich()
{
	return this->DienTich;
}

Ngay Nha::getNgayGD()
{
	return this->NgayGD;
}