#include <stdio.h>
int main () {
	float num1,num2,sum;
	printf("Enter number 1: \n");
	scanf("%f",&num1);
	printf("Enter number 2 \n");
	scanf("%f",&num2);
	sum=num1+num2;
	printf("The addition of two number is %.2f",sum);
	return 0;
	
}