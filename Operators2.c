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


   printf("Class A has %d students, and Class B has %d.\n\n", ClassA, ClassB);

       printf("Total students in both classes: %d.\n", sum);  
       printf("Difference in number of students: %d.\n", difference);
       printf("Product of the number of students: %d.\n", product);
       printf("Class A divided by Class B: %.2f.\n\n", quotient);

       printf("Class A has more than Class B AND fewer than 100 students? → %s\n", 
       andAnswer ? "Yes" : "No");
       printf("Class A has more than Class B OR fewer than 100 students? → %s\n", 
       orAnswer ? "Yes" : "No");
       printf("The previous statement is NOT true? → %s\n\n", 
       notAnswer ? "Yes" : "No");

       printf("Updating Class A:\n");
       printf("After adding 10 students: %d.\n", ClassA += 10);
       printf("After subtracting 10 students: %d.\n", ClassA -= 10);
       printf("After multiplying by 10: %d.\n", ClassA *= 10);
       printf("After dividing by 10: %.2f.\n", (float) (ClassA /= 10));
       printf("Class A modulo 10: %d.\n", ClassA %= 10);

return 0;
}
