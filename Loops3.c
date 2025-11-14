#include <stdio.h>

int main () {

//while loop
    int a = 1;
     printf("Numbers 1 to 10: ");
    while (a <= 10){
      printf ("%d ", a);
      a++;
    }
    printf("\n");

// for loop
    int b;
     printf("Even numbers 2 to 20: ");
    for (b = 2; b <=20; b +=2){
      printf ("%d ", b);
    }
    printf("\n");

// do/while loop
    int c = 1;
     printf("Count 1 to 5: ");
    do {
    printf("%d ", c);
    c++;
}
    while (c <= 5);
    printf("\n");

return 0;
}
