#include <stdio.h>
#include <stdlib.h>



int recursivo(int n){

	if(n==0){
		return 1;
	}else{
		return recursivo(9);
	}	
}




int main(int argc, char const *argv[])
{
	recursivo(5);
	
}

/*
int main(int argc, char const *argv[])
{
	
	//memory leak?

	int * ptr = (int *) malloc(10000000000) * sizeof(int) )int *ptr = (int *) mallo;
}

*/
