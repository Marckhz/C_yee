#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int data;
	int longitud;
	struct nodo *sig;

}Nodo;
	
Nodo * ListaNodos(Nodo *lista){
	lista = NULL;
	return lista;
}


Nodo * agregarNodo(Nodo *lista, int data){
	
	Nodo *nuevo_elemento, *temp;
	nuevo_elemento = (Nodo *) malloc(sizeof(Nodo));
	nuevo_elemento->data = data;
	nuevo_elemento->sig = NULL;
	if(lista ==NULL){
		lista = nuevo_elemento;
	}else{
		temp = lista;
		while(temp->sig !=NULL){
			temp = temp->sig;
	
		}
		temp->sig = nuevo_elemento;
	}
	return lista;

}

int * arr(int num){
	
	int * ptr;	
	int j=0;
	int z = 0;
	ptr = ( int * )malloc(1 *sizeof(int));
	for(int i =0; i <=j; i++){
		ptr[i] = num;
		printf("%d\n", ptr[i]);
	}

	return ptr;
	
}

Nodo * insert_node_head(Nodo **head, Nodo * new_node){
	new_node->sig = *head;
	*head = new_node;
	return new_node;

}
int main(){
	
	Nodo *lista = ListaNodos(lista);
	Nodo *ptr = ListaNodos(lista);
	int *arreglo = (int *) malloc(sizeof(int)*2),c=0;
	lista = agregarNodo(lista, 5);
	lista = agregarNodo(lista, 10);
	while(lista !=NULL){
		//printf("%d", lista->data);
		//arr(lista->data);
		arreglo[c] = lista->data;
		lista = lista->sig;
		c++;
	}
	Nodo * lista_reverse = ListaNodos(lista_reverse);
	c--;
	while( c >=0){
		lista_reverse = agregarNodo(lista_reverse,arreglo[c] );
		c--;
	}
	while(lista_reverse != NULL){
		printf("%d\n", lista_reverse->data);
		lista_reverse = lista_reverse->sig;
	}
	
}
	    	
	

