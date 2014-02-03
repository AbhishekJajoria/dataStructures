#include<stdio.h>
int array[] = {-5,-10,20,30,40,-15,5};
struct dataType{
int sum;
int i;
int j;
};
struct dataType  contigsum(int ,int );
//void maximumContigsum(int  , int );

int main(){
	struct dataType l = contigsum(0,6);
	printf("The maximum sum is %d from %d to %d",l.sum,l.i,l.j);
	return 0;
}
struct dataType  contigsum(int i , int j){

struct dataType result;

if(i==j){
	result.sum = array[i];
	result.i = i;
	result.j = j;
	return result;
}
struct dataType leftArray;

struct dataType rightArray;

leftArray  = contigsum(i,(j+i)/2);

rightArray = contigsum((j+i)/2+1,j);

if((leftArray.j==rightArray.i-1)&&(leftArray.sum>0)&&(rightArray.sum>0)){
	result.i=leftArray.i;
	result.j=rightArray.j;
	result.sum=leftArray.sum+rightArray.sum;
	return result;
}

else if(leftArray.sum>=rightArray.sum){
return leftArray;
}
else {
	return rightArray;
}
}

