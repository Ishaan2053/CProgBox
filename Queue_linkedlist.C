#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front, *rear;
void insert();
void display();
void del();
int main()
{
    int choice, data;
    while (choice != 4)
    {
        printf("\nEnter\n 1:Insert \n 2:delete \n 3:Display \n 4:Exit");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter node to be inserted:");
            insert();
            break;

        case 2:
            printf("\nEnter element to be deleted");
            del();
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
void insert()
{
    struct node *ptr;
    int item;
    scanf("%d", &item);
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("Overflowed");
    }
    else if (front == NULL)
    {
        ptr->data = item;
        front = ptr;
        rear = ptr;
        front->next = NULL;
    }
    else
    {
        ptr->data = item;
        rear->next = ptr;
        rear = ptr;
        rear->next = NULL;
    }
}
void del()
{
    struct node *ptr;
    if (front == NULL)
    {
        printf("\nUnderflow");
    }
    else
    {
        ptr = front;
        front = front->next;
        free(ptr);
    }
}
void display()
{
    struct node * ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("\n Queue Empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d\n", ptr -> data);
            ptr = ptr -> next;
        }
    }
}