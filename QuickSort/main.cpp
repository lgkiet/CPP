#include <iostream>
using namespace std;

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int Partition(int a[], int left, int right)
{
    int pivot = (left + right) / 2;
    int i = left, j = right;
    while(i <= j){
        while(a[i] <= pivot) i++;
        while(a[j] >= pivot) j--;
        if(i <= j) 
        {
            Swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    return i;
    
}

void QuickSort(int a[], int left, int right)
{
    if(left >= right)   return;
    int pivot = (left + right) / 2;
    
}

int main()
{


    return 0;
}