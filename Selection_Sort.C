#include <stdio.h>
// for finding minimum element
int min_loc(int a[], int k, int size)
{
    int j, pos;
    pos = k;
    for (j = k = 1; j < size; j++)
        if (a[j] < a[pos])
            pos = j;
    return pos;
}
// selection sirt function
int selection_sort(int a[], int size, int temp)
{
    int k, m;
    for (k = 0; k < size - 1; k++)
    {
        m = min_loc(a, k, size);
        temp = a[k];
        a[k] = a[m];
        a[m] = temp;
    }
}
int n, i, a[10], temp;
int main()
{
    printf("enter size of array to be sorted: ");
    scanf("%d", &n);
    printf("enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d\n", &a[i]);
    }
    printf("\nThe array after going through selection sort becomes: ");
    selection_sort(a[i], n);
    return 0;
}