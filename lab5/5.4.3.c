#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

int x = 0;
void *thread_PA(void *thread)
{
    while (1)
    {
        x++;
        if (x == 20)
            x = 0;
        printf("PA | x = %d\n", x);
    }
}

void *thread_PB(void *thread)
{
    while (1)
    {
        x++;
        if (x == 20)
            x = 0;
        printf("PB | x = %d\n", x);
    }
}

int main()
{
    pthread_t threadA, threadB;
    pthread_create(&threadA, NULL, &thread_PA, NULL);
    pthread_create(&threadB, NULL, &thread_PB, NULL);
    while (1)
        ;
    return 0;
}