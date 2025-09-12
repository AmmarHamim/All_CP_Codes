/*Armstrong number is a number that
 is equal to the sum of cubes of its digits*/

#include <stdio.h>
int main()
{
    while (1)
    {
        int num, rem, temp, sum = 0;

        printf("Enter any positive number: ");
        scanf("%d", &num);

        temp = num;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if (num == sum)
            printf("Armstrong Number\n");
        else
            printf("Not an Armstrong Number\n");
    }

    getch();
}
