#include<stdio.h>
int main()
{
    int a=5;
    int *ptr1 = NULL;
    int *ptr2 = NULL;

    //printf("%d\n",ptr1);

    if(ptr1==ptr2)
    {
        printf("Both are null pointer.");
    }
    else
    {
        printf("%d\n",*ptr1);
    }


    getch();
}
