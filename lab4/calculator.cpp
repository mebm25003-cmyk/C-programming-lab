#include <stdio.h>
int main() {
    float num1,num2;
    int input;
	printf("enter number 1: \n");
	scanf("%f",&num1);
	printf("enter number 2: \n");
	scanf("%f",&num2);
	printf("enter 1 for adition \n 2 for substraction \n 3 for multiplication \n 4 for division: \n");
	scanf("%d",&input);
	switch (input) {
		case 1:
			printf("%f+%f=%f\n",num1,num2,num1+num2);
		break;
		case 2:
		    printf("%f-%f=&f\n",num1,num2,num1-num2);
		break;
		case 3:
			printf("%f*%f=%f\n",num1,num2,num1*num2);
		break;
		case 4:
			printf("%f/%f=%f\n",num1,num2,num1/num2);
		break;
		default:
			printf("invalid input");
		break;
			
	}
	return 0;
}
