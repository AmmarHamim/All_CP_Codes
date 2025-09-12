#include<stdio.h>
int main(){
    int x,y;

    printf("Enter the value of X and Y:");
    scanf("%d%d",&x,&y);

    if(x>0 && y>0){
        printf("\t\tFirst quadrant");
    }

    else if(x<0 && y>0){
        printf("\t\tSecond quadrant");
    }

    else if(x<0 && y<0){
        printf("\t\tThird quadrant");
    }

    else if(x==0 && y==0){

        printf("\t\tCenter of the graph");
    }

    else {
        printf("\t\tFourth quadrant");

    }


return 0;
}
