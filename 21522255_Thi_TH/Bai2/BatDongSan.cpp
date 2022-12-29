#include "BatDongSan.h"

BatDongSan::BatDongSan()
{
	this->DonGia = 0;
	this->DienTich = 0;
}

BatDongSan::~BatDongSan()
{

}

void BatDongSan::Nhap()
{
	cout << "Nhap Ma Giao Dich: ";
	cin.ignore();
	getline(cin, this->MaGD);
	cout << "Nhap Ngay Giao Dich: ";
	cin >> NgayGD;
	cout << "Nhap Don Gia: ";
	cin >> this->DonGia;
	cout << "Nhap Dien Tich: ";
	cin >> this->DienTich;
}

void BatDongSan::Xuat()
{
	cout << "Ma Giao Dich: " << this->MaGD << endl;
	cout << "Ngay Giao Dich: " << this->NgayGD << endl;
	cout << "Don Gia: " << this->DonGia << endl;
	cout << "Dien Tich: " << this->DienTich << endl;
	cout << "Thanh Tien: " << this->ThanhTien() << endl;
}

double BatDongSan::ThanhTien()
{
	return 0.0;
}

int BatDongSan::PhanLoai()
{
	return 0;
}

double BatDongSan::getDienTich()
{
	return this->DienTich;
}

Ngay BatDongSan::getNgayGD()
{
	return this->NgayGD;
}