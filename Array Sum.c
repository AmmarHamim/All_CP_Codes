#include <stdio.h>
int main()
{
    int num[20], i, n, sum = 0, avarage;
    printf("How many numbers?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    printf("Sum= %d\n", sum);
    printf("Average= %.2f\n", (float)sum / n);

    getch();
}
