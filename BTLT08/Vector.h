#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class Vector
{
private:
	float x, y;
public:
	float length();
	friend istream& operator>>(istream& is, Vector& a);
	friend ostream& operator<<(ostream& os, Vector a);
	friend Vector operator+(Vector a, Vector b);
	friend Vector operator-(Vector a, Vector b);
	friend bool operator==(Vector a, Vector b);
	friend bool operator<(Vector a, Vector b);
	friend bool operator>(Vector a, Vector b);
	friend bool operator<=(Vector a, Vector b);
	friend bool operator>=(Vector a, Vector b);
	friend bool operator!=(Vector a, Vector b);
};

