#include<stdio.h>
int main(){
    int i=0,j=0,a,b;

    //a=++i;
    //b=++i;

    //j= a+b;

    j=++i;
    ++i;
    j=i+i;

    j = (++i) + (++i);


    printf("%d %d",i,j);


return 0;
}
