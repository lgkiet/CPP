#include <iostream>
#include <climits>
#include <bits/stdc++.h>
#define MAXN 150000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

void XuatMang(int A[], const int &N) {
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}

void Merge(int a[], int l, int middle, int r)
{
    int k = l;
    int n1 = middle - l + 1;
    int n2 = r - middle;
    int *L = new int[n1];
    int *R = new int[n2];

    for(int i = 0; i < n1; i++)
        L[i] = a[l + i];
    for(int j = 0; j < n2; j++)
        R[j] = a[middle + 1 + j];

    int i, j;
    for(i = 0,j = 0; i < n1 && j < n2; k++)
    {
        if(L[i] < R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
    }

    while(i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }

    
}

void MergeSort(int a[], int n)
{
    for(int i = 1; i < n; i *= 2)
    {
        for(int l = 0; l < n; l += 2*i)
        {
            int m = (l+i-1 > n - 1) ? n - 1 : l+i-1;
            int r = (l + 2 * i - 1 > n - 1) ? n - 1 : l + 2 * i - 1;

            Merge(a, l, m , r);
        }
    }
}




int main() {
    int a[MAXN], n;

    NhapMang(a, n);

	MergeSort(a, n);

    XuatMang(a, n);

    return 0;
}