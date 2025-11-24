#include <stdio.h>
int main() {
	char ch;
	printf("Enter your character: \n");
	scanf("%c",&ch);
	printf("The ASCII value is : %d \n",ch);
	
	
	if (ch>=65 && ch<=90) {
		printf("%c is an uppercase character",ch);
	} 
	else if (ch>=97 && ch<=122) {
		printf("%c is an lowercase character",ch);
	}
	else if (ch>=48 && ch<=57) {
		printf("%c is an numeric character",ch);
    }
    else if ((ch>=33 && ch<=46) || (ch>=58 && ch<=64)) {
		printf("%c is an special character",ch);
    }
    else{
    	printf("you have entered something non recognisable...");
	}
	return 0;
}
