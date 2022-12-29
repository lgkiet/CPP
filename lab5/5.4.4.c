#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

pthread_mutex_t mutex; // khởi tạo mutex để tránh trường hợp 2 process cùng vào vùng tranh chấp
int x = 0;             // khởi tạo biến x = 0

void *thread_PA(void *thread) // thread_PA() là thread tăng số lượng x
{
    while (1) // vòng lặp vô hạn
    {
        pthread_mutex_lock(&mutex);   // khóa mutex để tránh trường hợp 2 process cùng vào vùng tranh chấp
        x++;                          // tăng số lượng x
        if (x == 20)                  // kiểm tra x có bằng 20 hay không
            x = 0;                    // nếu bằng 20 thì gán x = 0
        printf("PA | x = %d\n", x);   // in ra số lượng x
        pthread_mutex_unlock(&mutex); // mở khóa mutex để cho phép các process khác vào vùng tranh chấp
    }
}

void *thread_PB(void *thread) // thread_PB() là thread tăng số lượng x
{
    while (1) // vòng lặp vô hạn
    {
        pthread_mutex_lock(&mutex);   // khóa mutex để tránh trường hợp 2 process cùng vào vùng tranh chấp
        x++;                          // tăng số lượng x
        if (x == 20)                  // kiểm tra x có bằng 20 hay không
            x = 0;                    // nếu bằng 20 thì gán x = 0
        printf("PB | x = %d\n", x);   // in ra số lượng x
        pthread_mutex_unlock(&mutex); // mở khóa mutex để cho phép các process khác vào vùng tranh chấp
    }
}

int main()
{
    pthread_mutex_init(&mutex, NULL);                 // khởi tạo mutex
    pthread_t threadA, threadB;                       // khởi tạo 2 thread
    pthread_create(&threadA, NULL, &thread_PA, NULL); // tạo threadA
    pthread_create(&threadB, NULL, &thread_PB, NULL); // tạo threadB
    while (1)
        ;
    return 0;
}