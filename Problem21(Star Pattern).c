#include<stdio.h>
int main (){
    int row,col,n;
    printf("Enter n=");
    scanf("%d",&n);
    //Creating row
    for(row=n;row>=1;row--){
        //Creating spaces
        for(col=1;col<=n-row;col++)
                printf(" ");
                //Printing stars
            for(col=1;col<=2*row-1;col++)
                 printf("*");


       printf("\n");
        }

for(row=2;row<=n;row++){

    for(col=1;col<=n-row;col++)
        printf(" ");
    for(col=1;col<=2*row-1;col++)
        printf("*");
    printf("\n");
}




return 0;
}

