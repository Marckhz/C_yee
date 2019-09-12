#include <stdlib.h>
#include <stdio.h>


#define MAX_DEFINE 100

void  main(int argc, char const *argv[])
{
	int desired_numbers;
	printf("Cantidad de numeros a introducir?\n");
	int i = 0;
	int x;
	int bigger;
	int smaller;
	scanf("%d", &desired_numbers);

	if(desired_numbers < MAX_DEFINE){

		printf("Numero 1\n");
		scanf("%d", &x);
		bigger = x;
		smaller = x;
		while(i-1 < desired_numbers){
			scanf("%d", &x);
			if(x > bigger){
				bigger = x;
				
			}
			if(x < smaller){
				smaller = x;
			}
			i++;
		}
	}
	printf("bigger > %d \n smaller %d", bigger, smaller);

}