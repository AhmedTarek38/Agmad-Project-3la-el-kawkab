#include <stdio.h>
#include <conio.h>
#include "multi.h"

float sub(float a, float b)
{
	return a-b;
}
// Function to add two numbers //SUM Function
int addNumbers(float a, float b) {
    return a + b;
}
//multiplication
float multi(float x, float y) { return (x * y);}

//Division function
float division(float x, float y)
{
	while(y==0){
		printf("Can't divide by zero!\nPlease enter a different number");
		scanf("%f",&y);
	}
	return (x/y);
}

int main() {
   float num1, num2;

    // Taking input from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calling the addNumbers function and printing the result
    float result = addNumbers(num1, num2);
    printf("The sum of %f and %f is: %f\n", num1, num2, result);

    float z = 0.0;
    z = multi(2.1, 2.3);
    printf("The value is %f", z);

    float x,y,r;
	printf("enter two numbers");
	scanf("%f",&x);
	scanf("%f",&y);
	r=sub(x,y);
	printf("%f",r);

	//Using the division function
	printf("Enter two numbers: ");
	scanf("%f%f",&num1,&num2);
	result=division(num1,num2);
	printf("The division of %f by %f is: %f",num1,num2,result);

	//Trying to make a calculator application but not sure if it works
	char op;

	printf("Enter the first number: ");
	scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the operation needed: ");
    fflush(stdin);
    scanf("%c", &op);

    switch(op)
    {
    case '+':
    	result = addNumbers(num1, num2);
    	printf("The sum of %f and %f is: %f\n", num1, num2, result);
    	break;
    case '-':
    	result = sub(num1, num2);
    	printf("The subtraction of %f from %f is: %f\n", num2, num1, result);
       	break;
    case '*':
    	result = multi(num1, num2);
    	printf("The multiplication of %f and %f is: %f\n", num1, num2, result);
       	break;
    case '/':
    	result = division(num1, num2);
       	printf("The division of %f by %f is: %f\n", num1, num2, result);
    	break;
    default:
    	printf("Not valid");
    }
    getch();
    return 0;
}
