#include<stdio.h>
int main()
{
    int a[5]={1,-4,2,6,4};
    int *p=&a[0];

    printf("Value is=%d\n",*p);
    printf("Address of element is=%u\n",p);

    p=p+3;


    printf("Value is=%d\n",*p);
    printf("Address of element is=%u\n",p);


    getch();
}
