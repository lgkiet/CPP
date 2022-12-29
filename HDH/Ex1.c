#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

pthread_t tid[2];
sem_t sem;
int a[100000];
int size_a = 0;

void *f1()
{
    while (1)
    {
        sem_wait(&sem);
        if (size_a > 0)
        {
            size_a--;
            printf("Lay b ra Size of array_A: %d\n", size_a);
        }
        else
        {
            printf("Nothing in array a\n");
        }
    }
}

void *f2()
{
    while (1)
    {
        a[size_a] = rand() % 100000;
        size_a++;
        printf("Size of array_A: %d\n", size_a);
        sem_post(&sem);
    }
}
int main(int arg, char *argv[])
{
    srand(time(NULL));
    int i;
    for (i = 0; i < 100000; i++)
    {
        a[i] = 0;
    }
    pthread_create(&tid[0], NULL, f1, NULL);
    pthread_create(&tid[1], NULL, f2, NULL);
    for (i = 0; i < 2; i++)
        pthread_join(tid[i], NULL);
}