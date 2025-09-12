/*A void pointer is a pointer that has no associated data type with it.
It can hold an address of any type and can be typecasted to any type.*/
#include<stdio.h>
int main()
{
    int a=8;
    float b=69.69;
    char c='K';
    void *vp;

    vp=&a;
    printf("a= %d\n",*(int *)vp);

    vp=&b;
    printf("b= %.2f\n",*(float *)vp);

    vp=&c;
    printf("c= %c\n",*(char *)vp);



    getch();
}
