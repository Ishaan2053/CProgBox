#include <stdio.h>
int main()
{
    int n, i, flag = 0, a[10], data;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d\n", &a[i]);
    }
    printf("\nEnter item to search: ");
    scanf("%d", &data);
    i=0;
    while (i < n)
    {
        if (a[i] == data)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Element is found: %d", i + 1);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}