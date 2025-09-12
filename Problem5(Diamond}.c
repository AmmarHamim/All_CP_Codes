#include<stdio.h>
int main(){

        while(1){
    int row,col,n;
    printf("Enter n=");
    scanf("%d",&n);

    //Creating Rows
    for(row=1;row<=n;row++){

        //Printing Space
        for(col=1;col<=n-row;col++)
            printf(" ");

        //Printing Stars
        for(col=1;col<=2*row-1;col++)
            printf("*");

        printf("\n");
    }

    //Creating Rows
    for(row=n-1;row>=1;row--){

        //Printing Space
        for(col=1;col<=n-row;col++)
            printf(" ");

        //Printing Stars
        for(col=1;col<=2*row-1;col++)
            printf("*");

        printf("\n");


    }


        }

return 0;
}

