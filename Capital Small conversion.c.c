#include<stdio.h>
int main ()
{

    while(1)
    {
        char ch;

        printf("Enter a letter:");
        scanf(" %c",&ch);

        if(ch>='a' && ch<='z')
        {

            printf("Capital version:%c",ch-32);

        }

        else if(ch>='A' && ch<='Z')
        {

            printf("Small version:%c",ch+32);
        }
        else
        {
            printf("Not a Letter");
        }

        printf("\n");
    }
    getch();
}
