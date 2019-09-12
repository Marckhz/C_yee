#include <stdlib.h>
#include <stdio.h>


#define PI 3.1416

void  main(int argc, char const *argv[])
{
	int r;
	int h;

	float area;
	float volumen;
	printf("introduzca radio\n");
	scanf("%d",&r);

	printf("introduzca altura \n");
	scanf("%d", &h);

	volumen = PI * (r * r) * h;
	area = (2 * PI * r * h)  + 2 * PI * (r + h); 

	printf("area %f \n", area);
	printf("volumen %f\n", volumen );
}