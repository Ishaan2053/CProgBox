#include <stdio.h>
void towers(int, char, char, char);
int main()
{
    int n;
    printf("enter the number of disks:");
    scanf("%d", &n);
    printf("\nThe number of sequences involved in Tower of Hanoi are: \n");
    towers(n, 'A', 'C', 'B');
    return 0;
}
void towers(int n, char source, char destination, char aux)
{
    if (n == 1)
    {
        printf("Move disk 1 from Tower %c to Tower %c\n", source, destination);
    }
    else
    {
        towers(n - 1, source, aux, destination);
        printf("Move disk %d from Tower %c to tower %c\n", n, source, destination);
        towers(n - 1, aux, destination, source);
    };
}
