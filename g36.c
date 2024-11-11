/*Dinesh working as a software engineer, He is responsible for implementing a number analysis feature in a program. He wants to design the program to accurately identify if a number is positive, negative, or zero, and display the appropriate message based on the analysis. Help Dinesh to design the program.

Input format :
The input consists of an integer n.

Output format :
If n is greater than zero, the output prints: "n is positive."

If n is less than zero, the output prints: "n is negative."

If n is zero, the output prints: "The number is zero."*/

#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
