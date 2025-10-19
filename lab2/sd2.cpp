#include <stdio.h>
int main() {
	float degree;
	printf("enter the temperature in degree celcius: \n");
	scanf("%f",&degree);
	if( degree >=0 && degree < 60){
		printf("the degree %f is in safe range.",degree);
	} 
	else if (degree >60 && degree <= 80){
		printf("WARNING %f , machine is getting hot",degree);
	}
	else {
		printf("WARNING: the degree %f is in danger range",degree);
	}
	return 0;
}