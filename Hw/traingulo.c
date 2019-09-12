#include <stdio.h>
#include <stdlib.h>


void main(int argc, char const *argv[])
{
	int A[2];
	int B[2];
	int C[2];

	int sarrus;
	printf("punto1\n");

	for(int i =0; i < 2; i++){
		scanf("%d", &A[i]);
	}
	printf("punto 2 \n");
	for(int q =0; q < 2; q++){
		scanf("%d, ", &B[q]);
	}
	printf("punto 3\n");
	for(int z = 0; z <2; z++){
		scanf("%d", &C[z]);
	}
	printf("============\n");
	
	sarrus = ( (A[0]*B[1])+ (B[0]*C[1] ) + (C[0]*A[1]) ) - ( (A[0]*C[1]) + (C[1]*B[2]) + (B[0]*A[1]) );
	printf("%d \n ",A[0]);
	
	printf("sarrus > %d", sarrus);

	int area = sarrus / 2;
	printf("area > %d \n",area);
		



}