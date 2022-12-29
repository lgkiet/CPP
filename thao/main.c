#include <stdio.h>
#include <conio.h>
#define MAX 15
void Nhap(int *n);
void NhapMang(int arr[], int &spt);
void XuatMang(int arr[], int spt);
bool KTSoHoanHao(int n);
int main()
{
    int n, SHH;
    int mang1d[MAX];
    NhapMang(mang1d, n);
    XuatMang(mang1d, n);
    printf("\nSo hoan hao co trong mang la: %d", KTSoHoanHao(n));
}

void Nhap(int &n)
{
}

void NhapMang(int arr[], int &spt)
{
    int i;
    do
    {
        printf("Nhap so phan tu cua mang (n > 0 va n < %d): ", MAX);
        scanf("%d", n);
    } while (*n <= 0 || *n > MAX);
    Nhap(spt);
    for (i = 0; i < spt; i++)
    {
        printf("\nNhap phan tu thu %d: ", i);
        scanf("%d", arr[i]);
        if (arr[i] == -1)
            break;
    }
}

void XuatMang(int arr[], int spt)
{
    int i;
    printf("\nMang nguoi dung da nhap la: ");
    for (i = 0; i < spt; i++)
    {
        printf("%d ", arr[i]);
    }
}