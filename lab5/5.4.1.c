/*#######################################
# University of Information Technology  #
# IT007 Operating System                #
# Le Quoc Khanh, 21520283               #
# File: 5.4.1.c                         #
#######################################*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

sem_t sem1, sem2;            // khởi tạo 2 semaphore sem1 và sem2, sem1 quản lý số lần sells tăng được, sem2 quản lý số lần products tăng được
int products = 0, sells = 0; // sells <= products <= sells + 93

void *processA() // processA() là process tăng số lượng products
{

    while (1) // vòng lặp vô hạn
    {
        sem_wait(&sem2);                          // sem_wait(&sem2) là processA() sẽ chờ cho đến khi sem2 có giá trị > 0 thì mới thực hiện tiếp
        products++;                               // tăng số lượng products
        printf("PA | products = %d\n", products); // in ra số lượng products
        sem_post(&sem1);                          // sem_post(&sem1) là processA() sẽ tăng giá trị của sem1 lên 1
    }
}

void *processB() // processB() là process tăng số lượng sells
{

    while (1) // vòng lặp vô hạn
    {
        sem_wait(&sem1);                    // sem_wait(&sem1) là processB() sẽ chờ cho đến khi sem1 có giá trị > 0 thì mới thực hiện tiếp
        sells++;                            // tăng số lượng sells
        printf("PB | sells = %d\n", sells); // in ra số lượng sells
        sem_post(&sem2);                    // sem_post(&sem2) là processB() sẽ tăng giá trị của sem2 lên 1
    }
}

int main()
{
    sem_init(&sem1, 0, products - sells);       // products - sells = 0
    sem_init(&sem2, 0, sells + 93 - products);  // sells + 93 - products = 93
    pthread_t pA, pB;                           // tạo 2 thread processA() và processB()
    pthread_create(&pA, NULL, &processA, NULL); // tạo thread processA()
    pthread_create(&pB, NULL, &processB, NULL); // tạo thread processB()
    while (1)
        ;
    return 0;
}
