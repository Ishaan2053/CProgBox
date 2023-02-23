#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void create(int n);
void display();
void insertatbeg();
void insertatpos();
void insertatend();
int main()
{
    int n, data, choice;
    printf("Enter:-\n0:Exit\n1:Create linkedlist\n2:Insert at beginning\n3:Insert at end\n4:Insert at position");
    while (choice != 0)
    {
        printf("Enter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
            break;

        case 1:
            printf("Enter number of nodes to be inserted:");
            scanf("%d", &n);
            create(n);
            break;

        case 2:
            printf("Enter the data to be inserted at beginning:");
            scanf("%d", &data);
            insertatbeg();

        case 3:
            printf("Enter data to be inserted at end:");
            scanf("%d", &data);
            insertatend();
            break;

        case 4:
            printf("Enter element to be inserted at location:");
            scanf("%d", &data);
            insertatpos();

        default:
            printf("Please enter valid input");
            break;
        }
    }
    return 0;
}
void create(int n)
{
}