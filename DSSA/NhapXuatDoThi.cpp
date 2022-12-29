#include <iostream>
using namespace std;

struct Canh
{
    string d1, d2;
    Canh *next;
};

struct BanDO
{
    Canh *head;
    Canh *tail;
};

// Cau b: Ham nhap xuat
void add_canh(BanDO &B, const string &d1, const string &d2)
{
    Canh *p = new Canh({d1, d2, nullptr});
    if (B.head == nullptr)
    {
        B.head = p;
        B.tail = p;
    }
    else
    {
        B.tail->next = p;
        B.tail = B.tail->next;
    }
}

void Create_BanDo(BanDO &B)
{
    B.head = nullptr;
    B.tail = nullptr;
}

void nhap(BanDO &B, int n)
{
    for (int i = 0; i < n; i++)
    {
        string d1, d2;
        cin >> d1 >> d2;
        add_canh(B, d1, d2);
    }
}

void xuat(BanDO &B, int n)
{
    cout << "\nSo canh: " << n << endl;
    for (Canh *p = B.head; p != NULL; p = p->next)
    {
        cout << p->d1 << " - " << p->d2 << endl;
    }
}t

int main()
{
    BanDO B;
    Create_BanDo(B);
    int i = 0;
    cin >> i;

    nhap(B, i);
    xuat(B, i);

    return 0;
}