#include <stdio.h>
#include <stdlib.h>
int a[5];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (rear == 5 - 1)
    {
        printf("Overflow");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        a[rear] = x;
    }
    else
    {
        rear++;
        a[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d", a[front]);
        front++;
    }
}
void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("No element to display");
    }
    else
    {
        for (i = front; i < rear + 1; i++)
        {
            printf("%d", a[i]);
        }
    }
}
int main()
{
    int choice;
    while (choice != 4)
    {
        printf("\nEnter\n 1:Enqueue \n 2:Dequeue \n 3:Display \n 4:Exit");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter node to be inserted:");
            enqueue();
            break;

        case 2:
            printf("\nEnter element to be deleted");
            dequeue();
            break;

        case 3:
            printf("\nThe list is:\n");
            display();
            break;

        case 4:
            printf("Exited");
            exit(0);
            break;

        default:
            printf("\nPlease enter valid input\n");
            break;
        }
    }
    return 0;
}