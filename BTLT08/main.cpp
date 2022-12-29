#include "Vector.h"

void InputList(Vector V[], int &n)
{
	cout << "Nhap so luong danh sach Vector: ";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cout << "Nhap V[" << i << "] = ";
		cin >> V[i]; 
	}
}

void OutputList(Vector V[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << V[i] << endl;
	}
}

void MaxLength(Vector V[], int n)
{
	float max_length = V[0].length();
	for(int i = 0; i < n; i++)
	{
		if(V[i].length() > max_length)
			max_length = V[i].length();
	}
	
	for(int i = 0; i < n; i++)
	{
		if(V[i].length() == max_length)
			cout << V[i] <<" ";
	}
}

int main() 
{
	int n;
	Vector *V = new Vector[n];
	InputList(V, n);
	OutputList(V, n);
	cout << "Vector co do dai lon nhat: ";
	MaxLength(V, n);
	return 0;
}    