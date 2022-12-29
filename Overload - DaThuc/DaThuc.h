#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class DaThuc
{
private:
    int n;
    float *arr;

public:
    DaThuc();
    DaThuc(int n);
    void set(int n, int a);
    float Value(float x);
    friend istream &operator>>(istream &is, DaThuc &a);
    friend ostream &operator<<(ostream &os, DaThuc a);
    friend DaThuc operator+(DaThuc a, DaThuc b);
    friend DaThuc operator-(DaThuc a, DaThuc b);
    DaThuc &operator++();
    DaThuc operator++(int);
    float &operator[](int i)
    {
        return this->arr[i];
    }
    void operator=(const DaThuc &b);
};