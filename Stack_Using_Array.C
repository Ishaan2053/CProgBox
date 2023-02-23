#include <stdio.h>
#include <stdlib.h>
int Stack[5];
int top = -1;
void push()
{
    int x;
    printf("Enter data: ");
    scanf("%d", &x);
    if (top == 5 - 1)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        Stack[top] = x;
    }
}
void pop()
{
    int y;
    if (top == -1)
    {
        printf("underflow");
    }
    else
    {
        y = Stack[top];
        top--;
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", Stack[i]);
    }
}
int main()
{
    int choice;
    while (choice != 4)
    {
        printf("Enter:-\n0:Exit\n1:Push\n2:Pop\n3:Display\n4:Exit");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exited");
            exit(0);
            break;

        default:
            printf("Enter valid choice");
            break;
        }
    }
    return 0;
}