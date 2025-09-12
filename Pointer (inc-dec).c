#include<stdio.h>
int main()
{
    int a[]= {1,-4,2,6,4,11,3,9,69};
    int *p,*q;
    p=a;

    printf("%d\n",*p);
    printf("%d %d %d\n",(*p)++,*p++,++*p);
    printf("%d\n",*p);
    q=p+3;
    printf("%d\n",*q);
    printf("%d\n",*q-3);
    printf("%d\n",*--q+5);
    printf("%d\n",*p+*q);




    getch();
}

