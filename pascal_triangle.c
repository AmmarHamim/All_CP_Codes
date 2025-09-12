#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &n);

    for (int line = 0; line < n; line++)
    {
        int coeff = 1;
        for (int space = 0; space < n - line - 1; space++)
        {
            printf(" ");
        }
        for (int i = 0; i <= line; i++)
        {
            printf("%d ", coeff);
            coeff = coeff * (line - i) / (i + 1);
        }
        printf("\n");
    }

    return 0;
}
