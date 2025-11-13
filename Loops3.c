#include <stdio.h>

int main () {

//while loop
    int a = 1;
    printf("Numbers from 1 to 10 using a while loop: ");
    while (a <= 10){
      printf ("%d ", a);
      a++;
    }
    printf("\n");

// for loop
    int b;
    printf("Even numbers from 2 to 20 using a for loop: ");
    for (b = 2; b <=20; b +=2){
      printf ("%d ", b);
    }
    printf("\n");

// do/while loop
    int c = 1;
    printf("Counting from 1 to 5 using a do-while loop: ");
    do {
    printf("%d ", c);
    c++;
}
    while (c <= 5);
    printf("\n");

    printf("End.");

return 0;
}
