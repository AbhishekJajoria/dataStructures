#include<stdio.h>

#define TRUE 0
#define FALSE 1
#define PATH  2


/*************	magic maze*********************/
int maze[5][5]={
			{0,0,0,0,0},
			{0,0,0,0,0},
			{1,0,0,0,0},
			{0,0,1,0,0},
			{0,0,0,0,0}
		};

int try(int ,int );
void drawboard(void);
int main(){
if(try(0,0)==TRUE)
	drawboard();
return 0;

}

int try(int i ,int j){
if(i>=0&&i<5&&j>=0&&j<5){
	if(maze[i][j]==1){
		return FALSE;
	}
	if(i==4&&j==4){
		maze[i][j]=2;
		return TRUE;
	}
	if(maze[i][j]==0){
	if(i==0&&j==0){
		maze[i][j]=2;
	}
		maze[i][j]=2;
		if(try(i+1,j)==TRUE){
			return TRUE;
			}
		maze[i][j]=2;
		 if(try(i,j+1)==TRUE){
			return TRUE;
			}
		maze[i][j]=2;
		 if(try(i-1,j)==TRUE){
			return TRUE;
			}
		maze[i][j]=2;
		 if(try(i,j-1)==TRUE){
			return TRUE;
			}
		
	}
	maze[i][j] =0;
	return FALSE;
}
maze[i][j] =0;
return FALSE;
}

void drawboard(){
			for(int i =0 ; i<5;i++){
							for(int j =0 ; j<5;j++)
								printf(" %d ",maze[i][j]);
							printf(" \n ");
						}		
printf(" \n ");
		}
