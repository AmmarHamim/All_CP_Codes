#include<stdio.h>
int main(){
    int m;

    printf("Enter the integer[1~12]:");
    scanf("%d",&m);


    if(m==1){
        printf("\t\tJanuary");
    }

    else if(m==2){
        printf("\t\tFebruary");
    }

    else if (m==3){
        printf("\t\tMarch");
    }

    else if(m==4){
        printf("\t\tApril");
    }

    else if(m==5){
        printf("\t\tMay");
    }

    else if(m==6){
        printf("\t\tJune");
    }

    else if(m==7){
        printf("\t\tJuly");
    }

    else if(m==8){
        printf("\t\tAugust");

    }

    else if(m==9){
        printf("\t\tSeptember");
    }

    else if(m==10){
        printf("\t\tOctober");
    }

    else if(m==11){
        printf("\t\tNovember");
    }

    else if(m==12){
        printf("\t\tDecember");
    }

    else {
        printf("\t\tInvalid Input");
    }



return 0;
}
