#include <stdio.h>

int main()
{
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    int binary[32];
    int i = 0;

    while (decimalNum > 0)
    {
        binary[i] = decimalNum % 2;
        decimalNum = decimalNum / 2;
        i++;
    }

    printf("Binary equivalent: ");
    if (i == 0)
    {
        printf("0");
    }
    else
    {
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", binary[j]);
        }
    }

    return 0;
}
