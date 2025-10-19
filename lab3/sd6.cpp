#include <stdio.h>
int main () {
	float KE,mass,velocity;
	printf("Enter the mass of the object in kg: \n");
	scanf("%f",&mass);
	printf("Enter the velocity of the object in m\s: \n");
	scanf("%f",&velocity);
	KE=0.5*mass*velocity*velocity;
	printf("The KE of the object is %.2f joule",KE);
	return 0;
	
}