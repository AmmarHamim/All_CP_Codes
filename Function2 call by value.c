#include<stdio.h>

void fun(int,int);//Function declaration
int main()
{
    int x=5;
    int y=7;

    fun(x,y);//Function calling
    printf("x=%d y=%d\n",x,y);
}
void fun(int x ,int y)//Function defination
{
     x=7;
     y=5;
    //called function
    printf("x=%d y=%d\n",x,y);

}

