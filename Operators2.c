#include <stdio.h>

int main () {
    int ClassA = 51;
    int ClassB = 49;

    int sum = ClassA + ClassB;      // arithmetic operators
    int difference = ClassA - ClassB;
    int product = ClassA * ClassB;
    float quotient = (float) ClassA / ClassB;

    int andAnswer = (ClassA > ClassB) && (ClassA < 100);      // logical operators
    int orAnswer = (ClassA > ClassB) || (ClassA < 100);
    int notAnswer = !((ClassA > ClassB) && (ClassA < 100));


    printf ("There are 51 students from Class A, while Class B has 49.\n\n");

    printf ("The total number of Class A students added to Class B = %d\n", sum);        // arithmetic operators
    printf ("The total number of Class A students subtracted from Class B = %d\n", difference);
    printf ("The total number of Class A students multiplied by Class B = %d\n", product);
    printf ("The total number of Class A students divided by Class B = %.2f\n\n", quotient);

    printf ("Class A has more students than Class B AND has less than 100 = %s\n", andAnswer ? "True" : "False");       // logical operators
    printf ("Class A has more students than Class B OR has less than 100 = %s\n", orAnswer ? "True" : "False");
    printf ("It is NOT true that Class A has more students than Class B and has less than 100 = %s\n\n", notAnswer ? "True" : "False");

    printf ("Number of Class A students added by 10 more is = %d\n", ClassA += 10);         // assignment operators
    printf ("Number of Class A students subtracted from 10 is = %d\n", ClassA -=10);
    printf ("Number of Class A students multiplied by 10 is = %d\n", ClassA *=10);
    printf ("Number of Class A students divided by 10 is = %.2f\n", (float) (ClassA /=10));
    printf ("Number of Class A students modulo 10 is = %d\n", ClassA %=10);

return 0;
}
