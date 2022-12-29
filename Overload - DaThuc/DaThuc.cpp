#include "DaThuc.h"

DaThuc::DaThuc()
{
    this->n = 0;
    arr = new float[this->n + 1];
    arr[0] = 1;
}

DaThuc::DaThuc(int n)
{
    this->n = n;
    arr = new float[this->n + 1];
    for (int i = this->n; i >= 0; i--)
    {
        arr[i] = 1;
    }
}

void DaThuc::set(int n, int a)
{
    this->n = n;
    for (int i = 0; i <= n; i++)
    {
        arr[i] = a;
    }
}

istream &operator>>(istream &is, DaThuc &a)
{
    do
    {
        cout << "Nhap bac cua da thuc: ";
        is >> a.n;
    } while (a.n < 0);

    a.arr = new float[a.n + 1];
    for (int i = a.n; i >= 0; i--)
    {
        cout << "He so cua x^" << i << " : ";
        is >> a.arr[i];
    }
    return is;
}

ostream &operator<<(ostream &os, DaThuc a)
{
    int count = 0;
    os << "P(x) = ";
    for (int i = a.n; i >= 0; i--)
    {
        if (a.arr[i] == 0)
            continue;
        if (count == 0)
        {
            i == 0 ? os << a.arr[i] : os << a.arr[i] << "x^" << i;
        }
        else
        {
            if (i == 0)
            {
                a.arr[i] < 0 ? os << " - " << a.arr[i] * (-1) : os << " + " << a.arr[i];
            }
            else if (i == 1)
            {
                a.arr[i] < 0 ? os << " - " << a.arr[i] * (-1) << "x" : os << " + " << a.arr[i] << "x";
            }
            else
            {
                a.arr[i] < 0 ? os << " - " << a.arr[i] * (-1) << "x^" << i : os << " + " << a.arr[i] << "x^" << i;
            }
        }
        count++;
    }
    cout << endl;
    return os;
}

float DaThuc::Value(float x)
{
    float result = 0;
    for (int i = n; i >= 0; i--)
    {
        result += this->arr[i] * pow(x, i);
    }
    return result;
}

DaThuc operator+(DaThuc a, DaThuc b)
{
    DaThuc result;
    result.n = (a.n >= b.n) ? a.n : b.n;
    int min_deg = (a.n >= b.n) ? b.n : a.n;
    result.arr = new float[result.n + 1];
    int k, i, j;
    for (i = 0, j = 0, k = 0; k <= min_deg; k++, i++, j++)
    {
        result.arr[k] = a.arr[k] + b.arr[k];
    }
    while (i <= a.n)
    {
        result.arr[k] = a.arr[i];
        k++;
        i++;
    }
    while (j <= b.n)
    {
        result.arr[k] = b.arr[j];
        k++;
        j++;
    }
    return result;
}

DaThuc operator-(DaThuc a, DaThuc b)
{
    DaThuc result;
    result.n = (a.n >= b.n) ? a.n : b.n;
    int min_deg = (a.n >= b.n) ? b.n : a.n;
    result.arr = new float[result.n + 1];
    int i, j, k;
    for (i = 0, j = 0, k = 0; k <= min_deg; k++, i++, j++)
    {
        result.arr[k] = a.arr[k] - b.arr[k];
    }
    while (i <= a.n)
    {
        result.arr[k] = a.arr[i];
        k++;
        i++;
    }
    while (j <= b.n)
    {
        result.arr[k] = (-1) * b.arr[j];
        k++;
        j++;
    }
    return result;
}

DaThuc &DaThuc::operator++()
{
    this->arr[0]++;
    return *this;
}

DaThuc DaThuc::operator++(int)
{
    DaThuc t = *this;
    this->arr[0]++;
    return t;
}

void DaThuc::operator=(const DaThuc &b)
{
    this->n = b.n;
    for (int i = 0; i <= this->n; i++)
    {
        this->arr[i] = b.arr[i];
    }
}
