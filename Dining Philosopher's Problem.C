#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>a
#include <unistd.h>

sem_t table;
sem_t fork[5];

void *philosopher(void *);
void eat(int);

void *philosopher(void *num)
{
    int phil = *(int *)num;

    sem_wait(&table);
    printf("\nPhilosopher %d has come to table", phil);
    sem_wait(&fork[phil]);
    sem_wait(&fork[(phil + 1) % 5]);

    eat(phil);
    sleep(2);
    printf("\nPhilosopher %d has finished eating", phil);

    sem_post(&fork[(phil + 1) % 5]);
    sem_post(&fork[phil]);
    sem_post(&table);
}

void eat(int phil)
{
    printf("\nPhilosopher %d is eating", phil);
}

int main()
{
    int i, a[5];
    pthread_t tid[5];

    sem_init(&table, 0, 4);

    for (i = 0; i < 5; i++)
        sem_init(&fork[i], 0, 1);

    for (i = 0; i < 5; i++)
    {
        a[i] = i;
        pthread_create(&tid[i], NULL, philosopher, (void *)&a[i]);
    }
    for (i = 0; i < 5; i++)
        pthread_join(tid[i], NULL);

    return 0;
}