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


    printf("In our school, Class A has %d students, while Class B has %d.\n\n", ClassA, ClassB);

    printf("If we combine both classes, we now have a total of %d students.\n", sum);  
    printf("If we compare Class A and Class B, the difference between their sizes is %d students.\n", difference);
    printf("Multiplying the number of students in Class A and Class B gives a product of %d.\n", product);
    printf("Dividing the number of students in Class A by Class B results in %.2f.\n\n", quotient);

    printf("Is it TRUE that Class A has more students AND has fewer than 100 students? → %s\n", 
           andAnswer ? "True" : "False");
    printf("Is it TRUE that Class A has more students OR has fewer than 100 students? → %s\n", 
           orAnswer ? "True" : "False");
    printf("Is the statement NOT true that Class A has more students and has less than 100? → %s\n\n", 
           notAnswer ? "True" : "False");

    printf("Now let's update Class A using assignment operators:\n");
    printf("After adding 10 more students to Class A, it becomes %d students.\n", ClassA += 10);
    printf("After subtracting 10 students, Class A now has %d.\n", ClassA -= 10);
    printf("Multiplying the count by 10 results in %d students.\n", ClassA *= 10);
    printf("Dividing that by 10 returns it to %.2f students.\n", (float) (ClassA /= 10));
    printf("Finding Class A modulo 10 gives us %d.\n", ClassA %= 10);

return 0;
}
