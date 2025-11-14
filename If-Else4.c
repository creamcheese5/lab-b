#include <stdio.h>

int main (){
    int num;2
    char choice;

    do {
        printf("Any number: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("%d is an EVEN number.\n", num);
        }
        else {
            printf("%d is an ODD number.\n", num);
        }

        printf("Another number? (Y/N): ");
        scanf(" %c", &choice);

        printf("\n");
    }
    while (choice == 'y' || choice == 'Y');

    printf("End.\n");

    return 0;
}