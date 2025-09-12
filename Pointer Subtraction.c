#include<stdio.h>
int main()
{
    int a[]= {1,-4,2,6,4,11,3,9,69};
    int *p=&a;
    int *q=&a[3];

    printf("q-p = %d\n",q-p);
    printf("p-q = %d\n",p-q);
    printf("q = %d\n",*q);
    printf("p = %d\n",*p);
    q=q-2;
    printf("q = %d\n",*q);
    p=p+2;
    printf("p-q = %d\n",p-q);
    q=q+7;
    printf("q = %d\n",*q);





    getch();
}

