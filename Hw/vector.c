#include <stdio.h>
#include <stdlib.h>
#include <time.h>





int modify( int *vector ){
  
  
  for(int i =0; i < 100; i++){
  	vector[i] = rand()%2;
	// vector++;
  }
  
}


int main(){
  
  int vector[100];

  for(int i = 0; i < 100; i++){
	vector[i] = rand()%2;	
  } 
  	
  for(int j = 0; j < 100; j++){
	printf("%d",  vector[j]);
  }

   modify(vector);
  printf("\n");

  for(int z = 0; z <100; z++){
  	printf("%d",  vector[z]);
  }

}
