#include <stdio.h>
// Function prototype
void findFactorial(int num, int *result);

int main()
{
    int num, result = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    findFactorial(num, &result);

    printf("Factorial of %d is %d\n", num, result);

    return 0;
}

// Function to calculate factorial
void findFactorial(int num, int *result)
{
    for (int i = 1; i <= num; ++i)
    {
        *result *= i;
    }
}
