#include<stdio.h>
float sub(float a, floatb);
int main()
{
	float x,y,z;
	printf("enter two numbers");
	scanf("%f",&x);
	scanf(""%f",&y);
	z=sub(x,y);
	printf("%f",z);
	
}
float sub(float a, float b)
{
	return a-b;