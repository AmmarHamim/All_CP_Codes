#include<stdio.h>

int* display(int []);

void main()
{
    int a[]={1,2,3,4,5},*p;

    p=display(a);
    printf("%d",*p);
}
int* display(int a[])
{
    a=a+2;
    return a;
}
