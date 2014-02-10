#include<stdio.h>
void numbers(int , int ,int);
int main(){
	numbers(10,10,10);
	return 0;
}
void numbers(int j , int k , int l){
int i;
if(j<k/2){
return ;
}
else{
i = k-j;
numbers(j-1,k,l);
}
printf("The numbers are %d %d \n",j,i);
return ;
}
