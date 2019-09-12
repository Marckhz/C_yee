#include <stdio.h>
#include <stdlib.h>

#define PI 3.1416


void main(int argc, char const *argv[])
{
	float area;
	float volumen;
	int radio;

	printf("intrdoduzca radio\n");

	scanf("%d", &radio);

	area = 4 * PI * (radio * radio);
	printf("area es > %f \n", area);

	int to_third = radio  *radio * radio;
	//printf("%d \n", to_third);
	int up_ =   4/3;
		
	volumen = (up_* PI) * to_third;

	printf("volumen es > %f \n", volumen);


}