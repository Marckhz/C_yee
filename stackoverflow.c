#include <stdio.h>
#include <stdlib.h>


int foo(){

	//stack overflow?	
	int c;
	c = 1+1;
	printf("%d\n", c);

	return foo();

}
int main(int argc, char const *argv[])
{
	foo();
	return 0;
}


int main(int argc, char const *argv[])
{
	
	//memory leak?

	int *ptr;	
	//ask memory
	int i =0;
	while(i <= 100000000000000000000000000){
		ptr = (int *)malloc(500* sizeof(int));
		i++;
	}
	ptr[35] = 100+1;
	printf("%d\n", ptr);

	//printf("\n");
}


