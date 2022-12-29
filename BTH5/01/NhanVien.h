#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class NhanVien
{
protected:
    string hoTen;
    string ngaySinh;

public:
    NhanVien();
    ~NhanVien();
    virtual void Nhap();
    virtual void Xuat();
};

class NhanVienSX : public NhanVien
{
private:
    long luongCB;
    int soSP;

public:
    NhanVienSX();
    ~NhanVienSX();
    void Nhap();
    void Xuat();
    long Luong();
};

class NhanVienVP : public NhanVien
{
private:
    int soNgayLamViec;

public:
    NhanVienVP();
    ~NhanVienVP();
    void Nhap();
    void Xuat();
    long Luong();
};