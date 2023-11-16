#include <stdio.h>
#include <conio.h>
#include "multi.h"


// Function to add two numbers //SUM Function
int addNumbers(float a, float b) {
    return a + b;
}
float sub(float a, float b);

int main() {
   float num1, num2;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calling the addNumbers function and printing the result
    ifloat result = addNumbers(num1, num2);
    printf("The sum of %f and %f is: %f\n", num1, num2, result);
	//printf("enter two numbers");
	//scanf("%f",&x);
	//scanf("%f",&y);
float z;
	x=sub(num1,num2);
	printf("%f",z);

    float z = 0.0;
    z = multi(2.1, 2.3);
    printf("The value is %f", z);
    getch();
    return 0;
}
float sub(float a, float b)
{
	return a-b;
}

