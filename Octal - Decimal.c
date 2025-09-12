#include<stdio.h>

int main() {
    int choice;
    printf("Choose conversion:\n");
    printf("1. Decimal to Octal\n2. Octal to Decimal\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d",&choice);

    if (choice==1) {
        int dec;
        printf("Enter a decimal number: ");
        scanf("%d",&dec);
        printf("Octal: %o\n", dec);
    }else if (choice == 2) {
        int oct;
        printf("Enter an octal number: ");
        scanf("%o", &oct);
        printf("Decimal: %d\n", oct);
    } else {
        printf("Invalid choice.\n");
    }

    getch();
}
