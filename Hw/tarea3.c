#include <stdlib.h>
#include <stdio.h>


void  main(int argc, char const *argv[])
{

	int face;
	int area_cara;
	int total_area;
	int volumen;


	scanf("%d", &face);
	
	area_cara = face * face;

	printf("area cara %d\n", area_cara );

	total_area = 6 * (area_cara, area_cara);
	volumen = face * face * face;

	printf("total area > %d \n", total_area);
	printf("volumen %d\n", volumen);
}