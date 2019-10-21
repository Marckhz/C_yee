#include <stdio.h>
#include <stdlib.h>

void reverse(char *rev ){

	char foo[5];
	for(int i =0; i <5; i++){
		foo[i] = rev[4-i];
		printf("%c\n", foo[i]);
		
	}
}


int main(){


	char bar[] = "hola";

	reverse( bar);
}
