#include<stdio.h>

#define FALSE 0
#define TRUE  1

int try(int);
void drawboard(void);
int good();

static short int board[8][8]={
			
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0},
             			{0,0,0,0,0,0,0,0},
				{0,0,0,0,0,0,0,0}

			};

int main(){
	int i,j;
	int k = good();
	if(try(0)==TRUE)	
		drawboard();
	return 0;
}

int try(int n){
	int i;
	for(i=0;i<8;i++){
		board[n][i] = TRUE;
		if((n==7)&&(good()==TRUE)){
			return TRUE;
		}
		else if (n<7 && good() == TRUE && try(n+1)==TRUE){
				return TRUE;
		}
		board[n][i] = FALSE;
	}
	return FALSE;
}

int good(){
int flag = 0 ;
for(int i=0;i<8;i++){
	for(int j=0;j<8;j++){
			if(board[i][j]==1){
			/** 	check for horizontal **/
				flag=flag+1;
				if(flag==2){
						return FALSE;
						}
			/**	Check For Vertical      **/	
				for(int p = 0 ; p<8;p++){
					if(board[p][j]==1&&(p!=i)){
						return FALSE;
						}
					}
			/**	Check for diagonal	**/
				for(int p = i ,j1=j ; (p<8)&&(j1<8);){
					if(board[++p][++j1]==1){
						return FALSE;
						}
					}
				for(int p = i ,j1=j ; (p>0)&&(j1>0);){
					if(board[--p][--j1]==1){
						return FALSE;
						}
					}
				for(int p = i ,j1=j ; (p<8)&&(j1<8)&&(p>0)&&(j1>0);){
					if(board[++p][--j1]==1){
						return FALSE;
						}
					}
				for(int p = i ,j1=j ; (p<0)&&(j1<0)&&(p<8)&&(j1<8);){
					if(board[--p][++j1]==1){
						return FALSE;
						}
					}
			  }
								


			}
			flag = 0 ;
		}
		
	return 1;
}

void drawboard(){
			for(int i =0 ; i<8;i++){
							for(int j =0 ; j<8;j++)
								printf(" %d ",board[i][j]);
						}		
		}
