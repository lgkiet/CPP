#include "ChuDauTu.h"

ChuDauTu::ChuDauTu()
{
	this->SoGiaoDich = 0;
	arr = new BatDongSan * [SoGiaoDich];
}

ChuDauTu::~ChuDauTu()
{
	delete[] this->arr;
}

void ChuDauTu::Nhap()
{
	int choice;
	cout << "Nhap So luong Giao Dich: ";
	cin >> this->SoGiaoDich;
	arr = new BatDongSan * [SoGiaoDich];
	for (int i = 0; i < this->SoGiaoDich; i++)
	{
		cout << "\n\nNhap loai Bat Dong San: " << endl;
		cout << "\t> 1. Nha" << endl;
		cout << "\t> 2. Can Ho" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			arr[i] = new Nha;
			break;
		case 2:
			arr[i] = new CanHo;
			break;
		default:
			cout << "Wrong Input ! ! !" << endl;
			break;
		}
		arr[i]->Nhap();
	}
}

void ChuDauTu::Xuat()
{
	cout << "So luong giao dich: " << this->SoGiaoDich << endl;
	for (int i = 0; i < this->SoGiaoDich; i++)
	{
		arr[i]->Xuat();
		cout << endl;
	}
}

void ChuDauTu::TongThanhTien()
{
	double TTNha = 0, TTCanHo = 0;
	for (int i = 0; i < this->SoGiaoDich; i++)
	{
		if (arr[i]->PhanLoai() == 1)
		{
			TTNha += arr[i]->ThanhTien();
		}
		if (arr[i]->PhanLoai() == 2)
		{
			TTCanHo += arr[i]->ThanhTien();
		}
	}

	cout << "Tong Thanh Tien cua san pham Nha: " << TTNha << endl;
	cout << "Tong Thanh Tien cua san pham Can Ho: " << TTCanHo << endl;
}

void ChuDauTu::TongDienTich()
{
	double TDTNha = 0, TDTCanHo = 0;
	for (int i = 0; i < this->SoGiaoDich; i++)
	{
		if (arr[i]->PhanLoai() == 1)
		{
			TDTNha += arr[i]->getDienTich();
		}
		if (arr[i]->PhanLoai() == 2)
		{
			TDTCanHo += arr[i]->getDienTich();
		}
	}

	cout << "Tong Dien Tich cua san pham Nha: " << TDTNha << endl;
	cout << "Tong Dien Tich cua san pham Can Ho: " << TDTCanHo << endl;
}

void ChuDauTu::SoLuongTungSP()
{
	int SoLuongNha = 0, SoLuongCanHo = 0;
	for (int i = 0; i < this->SoGiaoDich; i++)
	{
		if (arr[i]->PhanLoai() == 1)
		{
			SoLuongNha++;
		}
		if (arr[i]->PhanLoai() == 2)
		{
			SoLuongCanHo++;
		}
	}

	cout << "So luong Nha: " << SoLuongNha << endl;
	cout << "So luong Can Ho: " << SoLuongCanHo << endl;
}

void ChuDauTu::TraCuuNgayGD()
{
	Ngay TraCuuNgay;
	cin >> TraCuuNgay;
	for (int i = 0; i < this->SoGiaoDich; i++)
	{
		if (arr[i]->getNgayGD() == TraCuuNgay)
		{
			arr[i]->Xuat();
		}
	}
}