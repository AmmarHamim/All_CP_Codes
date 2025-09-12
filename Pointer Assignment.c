#include<stdio.h>
int main()
{
    int a=10,b=5;
    int *p,*q;
    p=&a;
    q=&b;
    //*q=*p;
    *p=*q;

    //printf("%d %d %d %d %d %d",a,b,p,q,*p,*q);
    printf("%d %d %d",a,*p,*q);


    getch();
}
