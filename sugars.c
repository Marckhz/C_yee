#include <stdlib.h>
#include <stdio.h>



int MAXSIZE = 8;
char stack[8];
int top  = -1;


int is_empty(){

	if(top == -1)
		return 1;
	else
		return 0;
}

int isfull(){
	if(top == MAXSIZE)
		return 1;
	else 
		return 0;
}


int peek(){
	return stack[top];
}


int pop(){
	int data;

	if(!is_empty() )
	{
		data = stack[top];
		top = top -1;
		return data;
	}
	else
	{
		printf("???\n");
	}
}

int push(int data){
	if( !isfull() )
	{
		top = top + 1;
		stack[top]  = data;
	}
	else 
	{
		printf("????\n");
	}
}

int main(){

	push('[');
	push('(');
	push('{');
	push('}');
	push(')');
	push(']');
	
	int i = 0;
	while(!is_empty() ){
		int data = pop();
		if(stack[i] == ')' || stack[i] == '}' || stack[i] ==']'){
			printf("error sintactico\n");
			break;
		}else{
			if(data == '}'  && stack[i] =='{'){
				printf("correct %c  %c  \n", stack[i], data);
			}
			else if(data == ')' && stack[i] == '(')
			{
				printf("correct %c %c \n", stack[i], data);
			}
			else if(data == ']' && stack[i] =='[')
				{
				printf("correct %c %c \n", stack[i], data);
			}
			else{
				printf("error %c \n", stack[i]);
				break;
			}
			//printf("%c\n", stack[i]);
			i++;
		}
	}
	
	
	
}