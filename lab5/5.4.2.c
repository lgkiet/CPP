/*#######################################
# University of Information Technology  #
# IT007 Operating System                #
# Le Quoc Khanh, 21520283               #
# File: 5.4.2.c                         #
#######################################*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

sem_t sem1, sem2;        // Khởi tạo 2 semaphore sem1 và sem2, sem1 quản lý số lần push phần tử vào mảng
                         // a, sem2 quản lý số lần pop phần tử ra khỏi mảng a.
pthread_mutex_t mutex;   // Khởi tạo mutex để tránh trường hợp 2 process cùng vào vùng tranh chấp.
int a[1000], dem = 0, n; // Mảng a chứa các phần tử được push vào, dem là số lượng phần tử trong mảng a,
                         // n là số lượng phần tử tối đa có thể push vào mảng a.

void *processA() // processA sẽ push phần tử vào mảng a
{
    while (1) // vòng lặp vô hạn
    {
        sem_wait(&sem1);                                            // sem_wait(&sem1) sẽ giảm giá trị
                                                                    // của sem1 đi 1, nếu giá trị của
                                                                    // sem1 = 0 thì processA sẽ bị block
                                                                    // cho đến khi giá trị của sem1 > 0.
        pthread_mutex_lock(&mutex);                                 // Khóa mutex để tránh trường hợp 2
                                                                    // process cùng vào vùng tranh chấp.
        a[dem++] = rand();                                          // Push phần tử ngẫu nhiên vào mảng a.
        printf("[PUSH]\tNumber of elements in array a: %d\n", dem); // In ra số lượng phần tử trong mảng a.
        pthread_mutex_unlock(&mutex);                               // Mở khóa mutex.
        sem_post(&sem2);                                            // sem_post(&sem2) sẽ tăng giá trị
                                                                    // của sem2 lên 1.
    }
}

void *processB() // processB sẽ pop phần tử ra khỏi mảng a
{
    while (1) // vòng lặp vô hạn
    {
        sem_wait(&sem2);                                               /* sem_wait(&sem2) sẽ giảm giá trị của sem2 đi 1, nếu giá trị của sem2 = 0 thì processB sẽ bị block cho đến khi giá trị của sem2 > 0.*/
        pthread_mutex_lock(&mutex);                                    // Khóa mutex để tránh trường hợp
                                                                       // 2 process cùng vào vùng tranh
                                                                       // chấp.
        dem--;                                                         // Pop phần tử ra khỏi mảng a.
        if (dem == 0)                                                  // Kiểm tra xem mảng a có phần tử
                                                                       // nào không?
            printf("[POP]\tNothing in array a\n");                     // Nếu không có phần tử nào thì in
                                                                       // ra "Nothing in array a".
        else                                                           // Ngược lại.
            printf("[POP]\tNumber of elements in array a: %d\n", dem); // In ra số lượng phần tử trong
                                                                       // mảng a.
        pthread_mutex_unlock(&mutex);                                  // Mở khóa mutex.
        sem_post(&sem1);                                               // sem_post(&sem1) sẽ tăng giá trị
                                                                       // của sem1 lên 1.
    }
}

int main()
{
    printf("\nNhap n: ");
    scanf("%d", &n);                            // Nhập số lượng phần tử tối đa có thể push vào mảng a.
    sem_init(&sem1, 0, n);                      // Khởi tạo sem1 với giá trị n (số lượng phần tử tối đa
                                                // có thể push vào mảng a).
    sem_init(&sem2, 0, 0);                      // Khởi tạo sem2 với giá trị 0.
    pthread_mutex_init(&mutex, NULL);           // Khởi tạo mutex.
    pthread_t pA, pB;                           // Khởi tạo 2 thread pA và pB.
    pthread_create(&pA, NULL, &processA, NULL); // Tạo thread pA.
    pthread_create(&pB, NULL, &processB, NULL); // Tạo thread pB.
    while (1)
        ;
    return 0;
}