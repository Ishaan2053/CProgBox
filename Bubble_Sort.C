#include<stdio.h>
int main()
{
    int a[10], i, n, j, temp;
     printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d\n", &a[i]);
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nThe sorted array is: ");
    for (i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}