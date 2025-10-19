#include <stdio.h>
int main () {
	float force,mass,acc;
	printf("Enter the mass of the object in kg: \n");
	scanf("%f",&mass);
	printf("Enter the acceleraton of the object in m\s^2: \n");
	scanf("%f",&acc);
	force=mass*acc;
	printf("The force experienced by the object is %.2f N",force);
	return 0;
	
}