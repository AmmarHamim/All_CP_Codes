#include<stdio.h>
int main(){
    int choice;

    while(1){

    printf("\n^_^Choose an option:\n");
    printf("1. Decimal to Octal\n");
    printf("2. Decimal to Hexadecimal\n");
    printf("3. Octal to Decimal\n");
    printf("4. Hexadecimal to Decimal\n");
    printf("5. Octal to Hexadecimal\n");
    printf("6. Hexadecimal to Octal\n");
    printf("Enter 1, 2, 3, 4, 5 or 6:");
    scanf("%d", &choice);

    if(choice == 1){

        int dec;
        printf("\t\t\tDecimal:");
        scanf("%d", &dec);
        printf("\t\t\tOctal: %o", dec);
    } else if(choice == 2 ){

        int dec;
        printf("\t\t\tDecimal:");
        scanf("%d", &dec);
        printf("\t\t\tHexadecimal: %x", dec);
  } else if(choice == 3){

      int oct;
      printf("\t\t\tOctal:");
      scanf("%o", &oct);
      printf("\t\t\tDecimal: %d", oct);

  } else if(choice == 4){

      int hex;
      printf("\t\t\tHexadecimal:");
      scanf("%x", &hex);
      printf("\t\t\tDecimal: %d", hex);

  } else if(choice == 5){

      int oct;
      printf("\t\t\tOctal:");
      scanf("%o", &oct);
      printf("\t\t\tHexadecimal: %x", oct);

  } else if(choice == 6){

      int hex;
      printf("\t\t\tHexadecimal:");
      scanf("%x", &hex);
      printf("\t\t\tOctal: %o", hex);

  } else {

            printf("\t\t\tInvalid Input,TRY AGAIN");
  }

    }

getch();
}
