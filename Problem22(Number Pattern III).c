#include<stdio.h>
int main(){
    int row,col,n,num;
    printf("Enter n=");
    scanf("%d",&n);
    //creating rows
    for(row=1;row<=n;row++){

        //printing num
        for(col=1;col<=row;col++)

            printf("%d ",col*row);
        printf("\n");
    }


return 0;
}
