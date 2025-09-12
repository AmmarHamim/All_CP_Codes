#include<stdio.h>

void fun(int *,int *);//Function declaration
int main()
{
    int x=5;
    int y=7;

    fun(&x,&y);//Function calling
    printf("x=%d y=%d\n",x,y);
}
void fun(int *ptr1 ,int *ptr2)//Function defination
{
     *ptr1=7;
     *ptr2=5;
    //called function
    printf("x=%d y=%d\n",*ptr1,*ptr2);

}


