/**
*Create By Abhishek Jajoria
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

int sudoku[9][9]={
		  {0,0,0,9,0,0,7,0,0},
		  {0,0,0,0,0,0,0,9,5},
		  {5,0,0,0,8,0,4,3,0},
		  {9,4,0,0,2,5,0,0,7},
		  {0,2,0,0,0,0,0,6,0},
		  {8,0,0,1,7,0,0,5,9},
		  {0,1,2,0,9,0,0,0,3},
		  {3,9,0,0,0,0,0,0,0},
		  {0,0,7,0,0,8,0,0,0}
};

int good();
int try();

int main(){

	for(int i = 0;i<9;i++){
	   for(int j=0;j<9;j++){
		printf("  %d ",sudoku[i][j]);
	}
	printf("\n\n");
     }
int check =good();
printf("\n %d ",check);
 /** if(try==TRUE)
	for(int i = 0;i<3;i++){
	   for(int j=0;j<3;j++){
		printf("  %d  ",sudoku[i][j]);
	}
	printf("\n\n");
     }*/
		return 0;
}

int good(){


	/**	Check For Horizontal	*/

	for(int i = 0;i<9;i++){
	int tempArray[]={0,0,0,0,0,0,0,0,0};
	   for(int j=0;j<9;j++){
		if(tempArray[sudoku[j][i]-1]==sudoku[j][i]&&(sudoku[j][i]!=0))
			return FALSE;
		else if(sudoku[j][i]!=0){
		tempArray[sudoku[j][i]-1] = sudoku[j][i];
		}
	}

}

	/***	Check For Vertical 	***/

	for(int i = 0;i<9;i++){
	int tempArray[9]={0,0,0,0,0,0,0,0,0};
	   for(int j=0;j<9;j++){
		if(tempArray[sudoku[j][i]-1]==sudoku[j][i]&&(sudoku[j][i]!=0))
			return FALSE;
		else if(sudoku[j][i]!=0){
		tempArray[sudoku[j][i]-1] = sudoku[j][i];
		}
	}
}
	return TRUE;
}

