#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int sourceArray[size];
    int destinationArray[size];

    printf("Enter elements of the source array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &sourceArray[i]);
    }

    int *srcPtr = sourceArray;
    int *destPtr = destinationArray;
    for (int i = 0; i < size; i++)
    {
        *(destPtr + i) = *(srcPtr + i);
    }

    printf("Source Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(srcPtr + i));
    }
    printf("\n");

    printf("Destination Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(destPtr + i));
    }
    printf("\n");

    return 0;
}
