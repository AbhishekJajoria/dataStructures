#include<stdio.h>
int array[] = {-5,-10,20,30,40,-15,5};
int contigsum(int ,int );
int main(){
return 0;
}
int contigsum(int i , int j){
int sum =0;
while(i<=j){
	sum = sum +array[i++];
}
return sum;
}
