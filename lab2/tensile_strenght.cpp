#include <stdio.h>
int main() {
	float strenght1,strenght2 ;
	printf("enter two tensile strenght: \n");
	scanf("%f%f",&strenght1,&strenght2);
	if(strenght1>strenght2){
		printf("material 1 with tensile stenght %.2f is larger then the material 2 with tensile strenght of %.2f.",strenght1,strenght2);
	} else if(strenght1<strenght2){
		printf("material 2 with tensile stenght %.2f is larger then the material 1 with tensile strenght of %.2f.",strenght2,strenght1);
	} else{
		printf("both material 1 and material 2 have same tensile strenght.");
	}
	return 0;
}
