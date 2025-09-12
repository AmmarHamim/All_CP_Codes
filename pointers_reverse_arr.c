#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nOriginal array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    int *startptr = array;
    int *endptr = &array[size - 1];

    while (startptr < endptr)
    {
        int temp = *startptr;
        *startptr = *endptr;
        *endptr = temp;

        startptr++;
        endptr--;
    }

    printf("\nReversed array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
