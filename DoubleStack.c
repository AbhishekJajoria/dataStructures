#include<stdio.h>
#include<malloc.h>

struct doublestack{
	int array[100] ;
	int topFirstStack;
	int topSecondStack;	
};
void push1(struct doublestack* ,int);
void push2(struct doublestack* ,int);
int pop1(struct doublestack*);
int pop2(struct doublestack*);
int main(){
	struct doublestack dstack;
	dstack.topFirstStack =-1;
	dstack.topSecondStack =100;
	push1(&dstack,10);
	push1(&dstack,20);
	push2(&dstack,30);
	push2(&dstack,50);
	int x = pop1(&dstack);
	printf("Pop item from stack one %d \n",x);
		int y = pop2(&dstack);
		printf("Pop item from stack two %d \n",y);
}

void push2(struct doublestack* dstack,int num){
	if((dstack->topFirstStack)==(dstack->topSecondStack-1)){
		printf("Stack OverFlow \n");
		return;
	}
	else {
		dstack->array[++(dstack->topSecondStack)] = num;
		return;
	}
}

void push1(struct doublestack* dstack,int num){
		if((dstack->topFirstStack)==(dstack->topSecondStack-1)){
			printf("stack overflow\n");
		return;
	}
else	
	{
		dstack->array[++(dstack->topFirstStack)] = num;
		return;
}
}
int pop1(struct doublestack* dstack){
			int data;
	if((dstack->topFirstStack)>=0){
		 data=dstack->array[dstack->topFirstStack--];
			return data;
	}
	else  {
		printf("Stack underflow\n");
		return 0;
	}
}
int pop2(struct doublestack* topSecondStack){
			int data;
	if((topSecondStack->topSecondStack)>=0){
		 data=topSecondStack->array[topSecondStack->topSecondStack--];
			return data;
	}
	else  {
		printf("Stack underflow\n");
		return 0;
	}
}
