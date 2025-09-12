#include<stdio.h>
int main() {
    int choice;

    printf("Choose an option:\n");
    printf("1.Upper to Lower\n");
    printf("2.Lower to Upper\n");
    printf("Enter 1 or 2:");
    scanf("%d",&choice);

    if(choice==1){

        char upper;
        printf("Enter any Upper Character:");
        scanf(" %c",&upper);
        printf("The Lower character is: %c",upper+32);

    }
    else if(choice==2){

        char lower;
        printf("Enter any lower Character:");
        scanf(" %c",&lower);
        printf("The Upper character is: %c",lower-32);
    }

    else {

        printf("            Invalid Input");
    }



getch();
}
