#include <stdio.h>

int main (){
    int num;
    char choice;

    do {
    printf("Enter number: ");
    scanf ("%d", &num);

    if (num % 2 == 0) {
    printf ("The number is even.\n");
    }
    else {
    printf ("The number is odd.\n");
    }
    printf ("Would you like to enter a new number? (Y/N): ");
    scanf(" %c", &choice);
    }
    while (choice == 'y' || choice == 'Y');

return 0;
}
