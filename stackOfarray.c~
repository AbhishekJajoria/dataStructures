#include<stdio.h>
#include<malloc.h>
#define MAXSIZE 10

struct datatype{
	int* variables;
	int total;
};
struct stack {
	int top;
	struct datatype daya[MAXSIZE];
};
void push(struct stack *,struct datatype);
int isEmpty(struct stack *);
struct datatype pop(struct stack *);
int main(){
	struct stack  demoStack;
	demoStack.top=-1;
	struct datatype new;
	new.total = 10;
	new.variables=(int*)malloc(new.total*sizeof(int));
	//int temp[6]={10,20,30,40,50,60};
	for(int i =0,j = 10;i<10;j+=10,i++){
	new.variables[i] = j;
	}
	push(&demoStack,new);
	struct datatype sample = pop(&demoStack);
	for(int i = 0;i<10;i++)
		printf("The value at i is %d \n",sample.variables[i]);
	return 0;
}
int isEmpty(struct stack * p){
	if(p->top==-1)
		return 1;
	else 
		return 0;
}

struct datatype pop(struct stack* stack){
		struct datatype p;
	if((stack->top)>=0){
		 p=stack->daya[stack->top--];
			return p;

	}
	else  {
		printf("Stack underflow\n");
		return p;
	}
}
void push(struct stack * stack,struct datatype mydata){
	if(stack->top==MAXSIZE-1){
		printf("stack overflow\n");
		return;
	}
	else{
		stack->daya[++(stack->top)] = mydata;
		return;
	}
	
}
