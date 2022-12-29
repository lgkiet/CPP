#include <iostream>
#include "String.h"
#include <cstring>
using namespace std;

String::String()
{
    DoDai = 1;
    pString = NULL;
}

String::String(const char *str)
{
    DoDai = strlen(str) + 1;
    pString = new char[DoDai];
    strcpy_s(pString, DoDai, str);
    pString[DoDai - 1] = '\0';
}

String::String(const String &a)
{
    DoDai = a.DoDai;
    pString = new char[DoDai];
    strcpy_s(pString, DoDai, a.pString);
}

String::~String()
{
    delete[] pString;
}

int String::GetLength()
{
    return DoDai - 1;
}

void String::xuat()
{
    if (pString != NULL)
        cout << pString;
}

int String::SoSanh(const String &a)
{
    if (a.pString == NULL && pString == NULL)
        return 0;
    if (a.pString == NULL)
        return 1;
    if (pString == NULL)
        return -1;
    return strcmp(pString, a.pString);
}

void String::NoiChuoi(const String &a)
{
    if (a.pString == NULL && pString == NULL)
        return;
    if (a.pString == NULL)
        return;
    char *p = new char[DoDai + a.DoDai - 1];
    if (pString == NULL)
    {
        strcpy_s(p, a.DoDai, a.pString);
        delete[] pString;
        pString = p;
        return;
    }

    for (int i = 0; i <= DoDai - 2; i++)
        p[i] = pString[i];
    for (int i = 0; i < a.DoDai; i++)
        p[i + DoDai - 1] = a.pString[i];
    delete[] pString;
    pString = p;
    DoDai = DoDai + a.DoDai - 1;
}

void String::nhap()
{
    cin >> pString;
    DoDai = strlen(pString);
}

void String::DaoChuoi()
{
    _strrev(pString);
}