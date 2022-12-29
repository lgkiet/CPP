#include "Point.h"
#include "TamGiac.h"
#include "DaGiac.h"
#include <iostream>
using namespace std;

int main()
{
	Point a;
	cout << "01." << endl;

	cout << "++++++++++++ Khoi tao mac dinh ++++++++++++" << endl;
	a.Xuat();

	cout << "++++++++++++ Khoi tao co tham so ++++++++++++" << endl;
	Point b(4, 5);
	b.Xuat();

	cout << "++++++++++++ Khoi tao sao chep ++++++++++++" << endl;
	Point c(b);
	c.Xuat();

	cout << "++++++++++++ Nhap ++++++++++++ " << endl;
	a.Nhap();

	cout << "++++++++++++ Xuat ++++++++++++ " << endl;
	a.Xuat();

	cout << "++++++++++++ Thay doi diem ++++++++++++ " << endl;
	a.Change();
	a.Xuat();

	cout << "++++++++++++ Lay hoanh do ++++++++++++ " << endl;
	cout <<"Hoanh do: " << a.get_Xaxis() << endl;

	cout << "++++++++++++ Lay tung do ++++++++++++ " << endl;
	cout << "Tung do: " << a.get_Yaxis() << endl;

	cout << "++++++++++++ Tinh Tien ++++++++++++ " << endl;
	a.TinhTien(3,6);
	cout << "Toa do diem sau khi tinh tien..." << endl;
	a.Xuat();

	cout << "\n02." << endl;
	TamGiac A;
	cout << "++++++++++++ Khoi tao mac dinh ++++++++++++" << endl;
	A.Xuat();

	cout << "++++++++++++ Khoi tao co tham so ++++++++++++" << endl;
	Point aa(3, 6);
	Point bb(6, 8);
	Point cc(1, 2);
	TamGiac B(aa, bb, cc);
	B.Xuat();

	cout << "++++++++++++ Khoi tao sao chep ++++++++++++" << endl;
	TamGiac C(B);
	C.Xuat();

	cout << "++++++++++++ Nhap ++++++++++++ " << endl;
	A.Nhap();

	cout << "++++++++++++ Xuat ++++++++++++ " << endl;
	A.Xuat();

	cout << "++++++++++++ Tinh Tien ++++++++++++ " << endl;
	A.TinhTien(2, 6);
	A.Xuat();

	cout << "++++++++++++ Trong Tam ++++++++++++ " << endl;
	cout << "Trong tam tam giac A sau khi tinh tien... " << endl;
	Point G = A.TrongTam();
	G.Xuat();

	cout << "\n03." << endl;
	DaGiac D;
	cout << "++++++++++++ Khoi tao mac dinh ++++++++++++" << endl;
	D.Xuat();

	cout << "++++++++++++ Khoi tao co tham so ++++++++++++" << endl;
	DaGiac P(6);
	P.Xuat();

	cout << "++++++++++++ Khoi tao sao chep ++++++++++++" << endl;
	DaGiac O(P);
	O.Xuat();

	cout << "++++++++++++ Nhap ++++++++++++ " << endl;
	D.Nhap();


	cout << "++++++++++++ Xuat ++++++++++++ " << endl;
	D.Xuat();

	cout << "++++++++++++ Trong Tam ++++++++++++ " << endl;
	cout << "Trong tam cua Da giac D ..." << endl;
	Point t;
	t = D.TrongTam();
	t.Xuat();

	cout << "++++++++++++ Tinh Tien ++++++++++++ " << endl;
	D.TinhTien(8, 9);
	D.Xuat();

	return 0;
}