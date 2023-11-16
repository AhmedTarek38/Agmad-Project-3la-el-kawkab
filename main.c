#include <stdio.h>
#include <conio.h>
#include "multi.h"

int main()
{


    getch();
    return 0;
}
// Function to add two numbers //SUM Function
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calling the addNumbers function and printing the result
    int result = addNumbers(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    float z = 0.0;
    z = multi(2.1, 2.3);
    printf("The value is %f", z);
    getch();
    return 0;
}
