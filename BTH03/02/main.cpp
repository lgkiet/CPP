#include <iostream>
#include "String.h"
using namespace std;

int main()
{
	String a("Kiet"), b(" Dep Trai");
	a.NoiChuoi(b);
	cout << "length = " << a.GetLength() << endl;
	a.xuat();

	a.DaoChuoi();
	cout << endl;
	a.xuat();
	return 0;
}