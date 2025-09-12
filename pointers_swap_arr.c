#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size];

    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    printf("\nArrays before swapping:\n");
    printf("First array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\nSecond array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");

    // Swap the arrays using pointers
    int *ptr1 = array1;
    int *ptr2 = array2;
    for (int i = 0; i < size; i++)
    {
        int temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2++;
    }

    printf("\nArrays after swapping:\n");
    printf("First array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\nSecond array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}
