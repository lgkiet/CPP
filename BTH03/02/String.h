#pragma once
#include <iostream>
using namespace std;

class String
{
private:
    char *pString;
    int DoDai;

public:
    String();
    String(const char *str);
    String(const String &a); // copy constructor
    ~String();
    int GetLength();
    void xuat();
    int SoSanh(const String &a);
    void NoiChuoi(const String &a);
    void nhap();
    void DaoChuoi();
};