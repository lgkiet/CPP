#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
#define MAXN 100000
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

bool isGrow(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }
    return true;
}

// Selection Sort
void SelectionSort(int a[], int n)
{
    // Sort & Unsorted Method
    int min_index;
    for (int i = 0; i < n; i++)
    {
        // Dung bien de luu vi tri phan tu nho nhat
        min_index = i;
        // Duyet mang tu i+1 -> n de tim va cap nhat min_index
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_index])
                min_index = j;
        }
        // Sau khi tim duoc min_index -> swap phan tu nho nhat voi a[i]
        swap(a[i], a[min_index]);
    }
}

// Bubble Sort
void BubbleSort(int a[], int n)
{
    // Giả sử chúng ta cần sắp xếp dãy số [5 1 4 2 8] này tăng dần.
    // Lần lặp đầu tiên:
    // ( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Ở đây, thuật toán sẽ so sánh hai phần tử đầu tiên, và đổi chỗ cho nhau do 5 > 1.
    // ( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Đổi chỗ do 5 > 4
    // ( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Đổi chỗ do 5 > 2
    // ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Ở đây, hai phần tử đang xét đã đúng thứ tự (8 > 5), vậy ta không cần đổi chỗ.

    // Lần lặp thứ 2:
    // ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
    // ( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Đổi chỗ do 4 > 2
    // ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
    // ( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 )
    // Bây giờ, dãy số đã được sắp xếp, Nhưng thuật toán của chúng ta không nhận ra điều đó ngay được. Thuật toán sẽ cần thêm một lần lặp nữa để kết luận dãy đã sắp xếp khi và khi khi nó đi từ đầu tới cuối mà không có bất kỳ lần đổi chỗ nào được thực hiện.

    // Lần lặp thứ 3:
    // ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
    // ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
    // ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
    // ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

// Insertion Sort
void InsertionSort(int a[], int n)
{
    // 0 1 2  3 4
    // 2 3 4, 1 5
    // 2 3 4 4 5 |pos = 2, x = a[3] = 1 < a[pos] = 4, pos--
    // 2 3 3 4 5 |pos = 1, x = a[3] = 1 < a[pos] = 3, pos--
    // 2 2 3 4 5 |pos = 0, x = a[3] = 1 < a[pos] = 2, pos--
    // 1 2 3 4 5 |pos = -1 -> thoat khoi vong lap, thuc hien a[pos + 1 = 0] = x;
    for (int i = 1; i < n; i++)
    {
        // Gan x la phan tu dau tien cua Unsorted va pos la index cua phan tu truoc a[i] (pos = i - 1)
        int x = a[i], pos = i - 1;

        // Vong lap de tim vi tri phu hop cho x de them x vao Sorted
        while (pos >= 0 && x < a[pos])
        {
            // Neu x < a[pos] thi van lap, trong luc lap se lay a[pos+1] = a[pos]
            a[pos + 1] = a[pos];

            // Sau khi gan xong se giam pos xuong vi tri tiep theo
            pos--;
        }
        // Sau khi tim duoc vi tri thich hop thi THEM VAO TRUOC pos
        a[pos + 1] = x;
    }
}

// Heap Sort
void heapify(int a[], int n, int i)
{
    int max = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && a[l] > a[max])
        max = l;

    if (r < n && a[r] > a[max])
        max = r;

    if (max != i)
    {
        swap(a[i], a[max]);
        heapify(a, n, max);
    }
}
void BuildHeap(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
}
void HeapSort(int a[], int n)
{
    BuildHeap(a, n);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(a[i], a[0]);
        heapify(a, i, 0);
    }
}

// Merge Sort - Recursive
void Merge(int a[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int *L = new int[n1];
    int *R = new int[n2];
    int k = l;

    for (int i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    int i, j;
    for (i = 0, j = 0; i < n1 && j < n2; k++)
    {
        if (L[i] < R[j])
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

    while (i < n1)
    {
        a[k] = L[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}
void MergeSort(int a[], int l, int r)
{
    if (l < r)
    {
        int middle = l + (r - l) / 2;
        MergeSort(a, l, middle);
        MergeSort(a, middle + 1, r);
        Merge(a, l, middle, r);
    }
}

// Merge Sort - Non Recursive
void NR_MergeSort(int a[], int n)
{
    for (int i = 1; i < n; i *= 2)
    {
        for (int l = 0; l < n - 1; l += 2 * i)
        {
            int m = min(l + i - 1, n - 1);
            int r = min(l + 2 * i - 1, n - 1);
            Merge(a, l, m, r);
        }
    }
}

// Interchange Sort
void InterchangeSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
                swap(a[i], a[j]);
        }
    }
}

// Quick Sort
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int left = low;
    int right = high - 1;
    while (true)
    {
        while (left <= right && arr[left] < pivot)
            left++;
        while (right >= left && arr[right] > pivot)
            right--;
        if (left >= right)
            break;
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}
void quickSort(int arr[], int low, int high)
{ /* Hàm thực hiện giải thuật quick sort */
    if (low < high)
    {
        /* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
         và là phần tử chia mảng làm 2 mảng con trái & phải */
        int pi = partition(arr, low, high);

        // Gọi đệ quy sắp xếp 2 mảng con trái và phải
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void RandomArray(int *a, int n)
{
    srand(time(NULL));
    int r1, r2;
    for (int i = 0; i < n; i++)
    {
        r1 = rand() % 11;
        r2 = pow(-1, r1) * rand();
        a[i] = r2;
    }
}

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void CopyArray(int b[], int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Function(int a[], int b[], int n)
{
    string check;
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    SelectionSort(a, n);
    end = clock();
    cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    check = (isGrow(a, n) == true) ? "Da duoc sap xep" : "Chua duoc sap xep";

    cout << "1.  Selection Sort\t\ttime: " << cpu_time_used << "s.\t\t" << check << endl;

    CopyArray(b, a, n);
    start = clock();
    BubbleSort(a, n);
    end = clock();
    cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    check = (isGrow(a, n) == true) ? "Da duoc sap xep" : "Chua duoc sap xep";

    cout << "2.  Bubble Sort\t\t\ttime: " << cpu_time_used << "s.\t\t" << check << endl;

    CopyArray(b, a, n);
    start = clock();
    InsertionSort(a, n);
    end = clock();
    cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    check = (isGrow(a, n) == true) ? "Da duoc sap xep" : "Chua duoc sap xep";

    cout << "3.  Insertion Sort\t\ttime: " << cpu_time_used << "s.\t\t" << check << endl;

    CopyArray(b, a, n);
    start = clock();
    HeapSort(a, n);
    end = clock();
    cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    check = (isGrow(a, n) == true) ? "Da duoc sap xep" : "Chua duoc sap xep";

    cout << "4.  Heap Sort\t\t\ttime: " << cpu_time_used << "s.\t\t" << check << endl;

    CopyArray(b, a, n);
    start = clock();
    MergeSort(a, 0, n - 1);
    end = clock();
    cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    check = (isGrow(a, n) == true) ? "Da duoc sap xep" : "Chua duoc sap xep";

    cout << "5.  Merge Sort\t\t\ttime: " << cpu_time_used << "s.\t\t" << check << endl;

    CopyArray(b, a, n);
    start = clock();
    NR_MergeSort(a, n);
    end = clock();
    cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    check = (isGrow(a, n) == true) ? "Da duoc sap xep" : "Chua duoc sap xep";

    cout << "6.  Merge Sort - Non Recursive\ttime: " << cpu_time_used << "s.\t\t" << check << endl;

    CopyArray(b, a, n);
    start = clock();
    InterchangeSort(a, n);
    end = clock();
    cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    check = (isGrow(a, n) == true) ? "Da duoc sap xep" : "Chua duoc sap xep";

    cout << "7.  Interchange Sort\t\ttime: " << cpu_time_used << "s.\t\t" << check << endl;

    CopyArray(b, a, n);
    start = clock();
    quickSort(a, 0, n - 1);
    end = clock();
    cpu_time_used = (double)(end - start) / CLOCKS_PER_SEC;
    check = (isGrow(a, n) == true) ? "Da duoc sap xep" : "Chua duoc sap xep";

    cout << "8.  Quick Sort\t\t\ttime: " << cpu_time_used << "s.\t\t" << check << endl;
}

int main()
{
    int n = 100000;
    int *a1 = new int[n];
    int *a2 = new int[n]; // Dung de luu
    RandomArray(a1, n);
    CopyArray(a1, a2, n);
    Function(a1, a2, n);

    return 0;
}