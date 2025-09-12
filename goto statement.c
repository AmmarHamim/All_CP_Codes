#include<stdio.h>
int main()
{
    int i;
    i=1;
    hamim:
        printf("%d\t",i);
        i++;

        if(i<6)
            goto hamim;



    getch();
}
