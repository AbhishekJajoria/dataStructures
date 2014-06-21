#include<stdio.h>
#define STACKSIZE 10

struct stack{
int stackArray[STACKSIZE];
int top;
};
void push(struct stack *,int);
int pop(struct stack *);
int isEmpty(struct stack *);
int main(){
struct stack  demoStack;
struct stack  secondStack;
int j=0;
demoStack.top=-1;
secondStack.top=-1;
//stack initializing
push(&demoStack,10);
push(&demoStack,20);
push(&demoStack,30);
push(&demoStack,40);
push(&demoStack,50);
push(&demoStack,60);
push(&demoStack,70);
push(&demoStack,80);
push(&demoStack,90);
int n =0;
/**for(int i=9;i>0;i--){
 j= pop(&demoStack);
}**/
for(int i=9;!isEmpty(&demoStack);i--){
 j= pop(&demoStack);
}
push(&demoStack,10);
push(&demoStack,20);
push(&demoStack,30);
push(&demoStack,40);
push(&demoStack,50);
push(&demoStack,60);
push(&demoStack,70);
push(&demoStack,80);
push(&demoStack,90);
printf("\nThe value of i is %d\n",j);


return 0;
}
int isEmpty(struct stack * p){
	if(p->top==-1)
		return 1;
	else 
		return 0;
}
void push(struct stack * stack,int num){
	if(stack->top==STACKSIZE-1){
		printf("stack overflow\n");
		return;
	}
	else{
		stack->stackArray[++(stack->top)] = num;
		return;
	}
	
}

int pop(struct stack* stack){
	if((stack->top)>=0){
		return stack->stackArray[stack->top--];

	}
	else  {
		printf("Stack underflow\n");
		return 0;
	}
}
