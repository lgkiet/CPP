#include "PhanSo.h"
#include <iostream>
using namespace std;

int main()
{
	PhanSo a;
	cin >> a;
	cout << a;
	PhanSo b(6);

	cout << a + b;
	return 0;
}