#include <iostream>
using namespace std;
// Sap xep giam dan

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void SelectionSort(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        int max_index = i;
        for(int j=i+1; j < n; j++)
        {
            if(a[j] > a[max_index])
                max_index = j;
        }
        swap(a[i], a[max_index]);
    }
}

void Print(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}


int main() 
{ 
    
    int n = 7;
    int a[] = {3, 6, 2, 11, 5 , 4, 1};
    SelectionSort(a, n);
    Print(a, n);
    return 0; 
} 