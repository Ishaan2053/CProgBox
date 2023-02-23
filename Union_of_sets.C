#include <stdio.h>
int main()
{
    int a[20], b[20], c[20], n1, n2, i, j, k=0;
    printf("Enter size of array 1:");
    scanf("%d", &n1);
    printf("Enter size of array 2:");
    scanf("%d", &n2);
    printf("Enter elements of array 1:");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of array 2:");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (c[j] == a[i])
            {
                break;
            }
            if (j == k)
            {
                c[k] = a[i];
                k++;
            }
        }
    }
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (c[j] == b[i])
            {
                break;
            }
            if (j == k)
            {
                c[k] = b[i];
                k++;
            }
        }
        printf("The union is:");
        for (i=0; i<k; i++)
        {
            printf("%d", c[i]);
        }
    }
    return 0;
}