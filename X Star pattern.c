#include <stdio.h>

int main()
{
    while(1)
    {

        int size,row,col;

        printf("Enter the size of the X: ");
        scanf("%d", &size);

        if (size % 2 == 0)
        {
            // Make the size odd for a symmetrical X
            size++;
        }

        // Loop to print the X
        for (row = 1; row <= size; row++)
        {
            for (col = 1; col <= size; col++)
            {
                if (row == col || row + col == size+1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

    }
    getch();
}
