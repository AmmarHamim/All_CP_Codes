#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
int count(int n)
{
    if (n == 1)
        printf("1\n");
    else
    {
        count(n-1); //for 1 to n
        printf("%d\n", n);
       // count(n - 1); //for n to 1
    }
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    count(n);
    return 0;
}