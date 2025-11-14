#include <stdio.h>

int main () {

//while loop
    int a = 1;
    while (a <= 10){
      printf ("%d ", a);
      a++;
    }
    printf("\n");

// for loop
    int b;
    for (b = 2; b <=20; b +=2){
      printf ("%d ", b);
    }
    printf("\n");

// do/while loop
    int c = 1;

    do {
    printf("%d ", c);
    c++;
}
    while (c <= 5);
    printf("\n");

return 0;
}
