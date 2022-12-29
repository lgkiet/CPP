/*#######################################
# University of Information Technology  #
# IT007 Operating System                #
# Le Quoc Khanh, 21520283               #
# File: 5.4.2.1.c                       #
#######################################*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

int a[1000], dem = 0, n;

void *processA()
{
    while (1)
    {
        a[dem++] = rand();
        printf("[PUSH]\tNumber of elements in array a: %d\n", dem);
    }
}

void *processB()
{
    while (1)
    {
        dem--;
        if (dem == 0)
            printf("[POP]\tNothing in array a\n");
        else
            printf("[POP]\tNumber of elements in array a: %d\n", dem);
    }
}

int main()
{
    printf("\nNhap n: ");
    scanf("%d", &n);
    pthread_t pA, pB;
    pthread_create(&pA, NULL, &processA, NULL);
    pthread_create(&pB, NULL, &processB, NULL);
    while (1)
        ;
    return 0;
}