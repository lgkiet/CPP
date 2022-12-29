#include "DaGiac.h"

DaGiac::DaGiac()
{
	srand((int)time(0));
	this->n = 5;
	for (int i = 0; i < this->n; i++)
	{
		float r1 = rand() % 100 + (float)rand() / (float)RAND_MAX;
		float r2 = rand() % 100 + (float)rand() / (float)RAND_MAX;
		Point temp(r1, r2);
		*(a+i) = temp;
	}
}

DaGiac::DaGiac(int n)
{
	srand((int)time(0));
	this->n = n;
	for (int i = 0; i < this->n; i++)
	{
		float r1 = rand() % 100 + (float)rand() / (float)RAND_MAX;
		float r2 = rand() % 100 + (float)rand() / (float)RAND_MAX;
		Point temp(r1, r2);
		*(a+i) = temp;
	}
}

DaGiac::DaGiac(const DaGiac& T)
{
	this->n = T.n;
	for (int i = 0; i < this->n; i++)
	{
		*(a+i) = T.a[i];
	}
}

void DaGiac::Nhap()
{
	cout << "Nhap so dinh: ";
	cin >> this->n;
	for (int i = 0; i < this->n; i++)
	{
		cout << "Nhap dinh thu " << i + 1 <<"...." << endl;
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