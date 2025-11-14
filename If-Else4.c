#include <stdio.h>

int main (){
    int num;
    char choice;

    do {
        printf("Please enter any number to check if it’s even or odd: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("%d is an EVEN number.\n", num);
        }
        else {
            printf("%d is an ODD number.\n", num);
        }

        printf("Would you like to test another number? (Y/N): ");
        scanf(" %c", &choice);

        printf("\n");
    }
    while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the number checker!\n");

    return 0;
}