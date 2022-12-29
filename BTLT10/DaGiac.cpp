#include "DaGiac.h"

DaGiac::DaGiac()
{
}

DaGiac::DaGiac(int n) : n(n)
{
	a = new Point[n];
}

DaGiac::~DaGiac()
{
	delete[] a;
}

void DaGiac::Nhap()
{
	cout << "Nhap so dinh: ";
	cin >> this->n;
	for (int i = 0; i < this->n; i++)
	{
		cout << "Nhap dinh thu " << i + 1 << "...." << endl;
		this->a[i].Nhap();
	}
}

void DaGiac::Xuat()
{
	for (int i = 0; i < this->n; i++)
	{
		cout << "Dinh thu " << i + 1 << endl;
		this->a[i].Xuat();
	}
}

void DaGiac::TinhTien(float xx, float yy)
{
	for (int i = 0; i < this->n; i++)
	{
		this->a[i].TinhTien(xx, yy);
	}
}

Point DaGiac::TrongTam()
{
	float xx = 0.0, yy = 0.0;
	for (int i = 0; i < this->n; i++)
	{
		xx += this->a[i].get_Xaxis();
		yy += this->a[i].get_Yaxis();
	}
	xx /= this->n;
	yy /= this->n;
	Point G(xx, yy);
	return G;
}
