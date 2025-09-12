#include<stdio.h>
int main(){

    int i,a,b,sum=0;

    printf("Start from= ");
    scanf("%d",&a);
    printf("End here=");
    scanf("%d",&b);


    for(i=a;i<=b;i++){

        sum=sum+(i*i);
    }

        printf("Square Sum=%d",sum);




return 0;
}

