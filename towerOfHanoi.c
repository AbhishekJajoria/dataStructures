/**Created By Abhishek Jajoria
*/
#include<stdio.h>

void towers(int , char , char ,char);
int main(){

towers(3,'s','a','d');
return 0;
}

void towers(int disks,char source,char auxilery,char destination){
	if(disks==1){
	printf("Move disk %d from %c to %c \n",disks,source,destination);	
	return ;	
	}
	else{
	towers(disks-1,source,destination,auxilery);
	printf("move disk %d from %c to %c\n",disks,source,destination);
	towers(disks-1,auxilery,source,destination);
	}
}
