#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

int x1, x2, x3, x4, x5, x6, w, v, y, z, ans;
/*w = x1 * x2; (a)
v = x3 * x4; (b)
y = v * x5; (c)
z = v * x6; (d)
y = w * y; (e)
z = w * z; (f)
ans = y + z; (g)*/
sem_t semc, semd, seme1, seme2, semf1, semf2, semg1, semg2; // khởi tạo semaphore để quan lý các process

void *processA(void *thread) // processA() là process tính w
{
    w = x1 * x2;                                  // tính w
    printf("PA | w = %d * %d = %d\n", x1, x2, w); // in ra w
    sem_post(&seme1);                             // mở khóa seme1 để cho phép processE() vào vùng tranh chấp
    sem_post(&semf1);                             // mở khóa semf1 để cho phép processF() vào vùng tranh chấp
}

void *processB(void *thread) // processB() là process tính v
{
    v = x3 * x4;                                  // tính v
    printf("PB | v = %d * %d = %d\n", x3, x4, v); // in ra v
    sem_post(&semc);                              // mở khóa semc để cho phép processC() vào vùng tranh chấp
    sem_post(&semd);                              // mở khóa semd để cho phép processD() vào vùng tranh chấp
}

void *processC(void *thread) // processC() là process tính y
{
    sem_wait(&semc);                             // đợi cho đến khi semc được mở khóa
    y = v * x5;                                  // tính y
    printf("PC | y = %d * %d = %d\n", v, x5, y); // in ra y
    sem_post(&seme2);                            // mở khóa seme2 để cho phép processE() vào vùng tranh chấp
}

void *processD(void *thread) // processD() là process tính z
{
    sem_wait(&semd);                             // đợi cho đến khi semd được mở khóa
    z = v * x6;                                  // tính z
    printf("PD | z = %d * %d = %d\n", v, x6, z); // in ra z
    sem_post(&semf2);                            // mở khóa semf2 để cho phép processF() vào vùng tranh chấp
}

void *processE(void *thread) // processE() là process tính y
{
    sem_wait(&seme1);                                        // đợi cho đến khi seme1 được mở khóa
    sem_wait(&seme2);                                        // đợi cho đến khi seme2 được mở khóa
    y = w * y;                                               // tính y
    printf("PE | y = %d * %1.f = %d\n", w, (float)y / w, y); // in ra y
    sem_post(&semg1);                                        // mở khóa semg1 để cho phép processG() vào vùng tranh chấp
}

void *processF(void *thread) // processF() là process tính z
{
    sem_wait(&semf1);                                        // đợi cho đến khi semf1 được mở khóa
    sem_wait(&semf2);                                        // đợi cho đến khi semf2 được mở khóa
    z = w * z;                                               // tính z
    printf("PF | z = %d * %1.f = %d\n", w, (float)z / w, z); // in ra z
    sem_post(&semg2);                                        // mở khóa semg2 để cho phép processG() vào vùng tranh chấp
}

void *processG(void *thread) // processG() là process tính ans
{
    sem_wait(&semg1);                               // đợi cho đến khi semg1 được mở khóa
    sem_wait(&semg2);                               // đợi cho đến khi semg2 được mở khóa
    ans = y + z;                                    // tính ans
    printf("PG | ans = %d + %d = %d\n", y, z, ans); // in ra ans
}

int main()
{
    printf("Enter x1, x2, x3, x4, x5, x6:\n");
    scanf("%d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6);                // nhập các giá trị x1, x2, x3, x4, x5, x6
    pthread_t threadA, threadB, threadC, threadD, threadE, threadF, threadG; // khai báo các thread
    sem_init(&semc, 0, 0);                                                   // khởi tạo các semaphore
    sem_init(&semd, 0, 0);
    sem_init(&seme1, 0, 0);
    sem_init(&seme2, 0, 0);
    sem_init(&semf1, 0, 0);
    sem_init(&semf2, 0, 0);
    sem_init(&semg1, 0, 0);
    sem_init(&semg2, 0, 0);
    pthread_create(&threadA, NULL, &processA, NULL); // tạo các thread
    pthread_create(&threadB, NULL, &processB, NULL);
    pthread_create(&threadC, NULL, &processC, NULL);
    pthread_create(&threadD, NULL, &processD, NULL);
    pthread_create(&threadE, NULL, &processE, NULL);
    pthread_create(&threadF, NULL, &processF, NULL);
    pthread_create(&threadG, NULL, &processG, NULL);
    pthread_join(threadA, NULL); // đợi các thread kết thúc
    pthread_join(threadB, NULL);
    pthread_join(threadC, NULL);
    pthread_join(threadD, NULL);
    pthread_join(threadE, NULL);
    pthread_join(threadF, NULL);
    pthread_join(threadG, NULL);
    return 0;
}