#include<stdio.h>
int main (){

    int choice;
    printf("Choose an option:\n");
    printf("1. Decimal to Hexa-decimal\n");
    printf("2. Hexa-decimal to Decimal\n");
    printf("Enter 1 or 2:");
    scanf("%d", &choice);

    if(choice == 1){

        int dec;
        printf("Decimal number:");
        scanf("%d", &dec);
        printf("Hexa-decimal= %x", dec);

    } else if(choice == 2){

        int hex;
        printf("Hexa-decimal number:");
        scanf("%x", &hex);
        printf("Decimal= %d", hex);

    } else {

        printf("Invalid Input Try Again");

    }

}
