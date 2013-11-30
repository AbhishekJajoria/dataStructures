#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int determinant(int**,int order);

int** minorMatrix(int**,int,int,int);

  int main(){
	int arr[][3]={{1,2,4},{3,4,2},{5,9,1}};
	printf("The value of arr is \n");
	int** matrix = (int**)malloc((3)*(sizeof(int*)));
	      for(int i = 0; i < 3; i++) {
       		 matrix[i] = (int*)malloc(3*(sizeof(int)));   
    	}
	for(int i = 0;i<3;i++){
	   for(int j=0;j<3;j++){
		printf("   %d   ",arr[i][j]);
		matrix[i][j]=arr[i][j];
	}
	printf("\n\n");
     }
	printf("The determinant value of arr is %d \n",determinant(matrix,3));
	printf("\n\n");

}

int determinant(int** arr,int order){
	int i=0,j =0;
	
	int determin = 0;	
	
	if(order==1){
		return arr[0][0];
	}
	else
	 while(j<order){
		int ** matrix  = minorMatrix(arr,i,j,order);
	double power = pow(-1,(i+j));
	determin=determin+ power*arr[i][j]*determinant(matrix,order-1);	
	j++;
	}
return determin;
}

/** 	Below function returns the minor of a matrix		**/

int** minorMatrix(int ** array ,int row,int column,int order){
	
	/**create a minor of the matrix**/

	int **minor = NULL;
	int minorRow=0;
	int minorColumn=0;
	minor = (int**)malloc((order-1)*(sizeof(int*)));

      for(int i = 0; i < order; i++) {
        minor[i] = (int*)malloc((order-1)*(sizeof(int)));   
    	}

	for(int i = 0;i<order;i++){
		for(int j=0;j<order;j++){
    			if(row!=i&&column!=j){
				//printf("   %d   ",array[i][j]);
				if(minorColumn==(order-1)){
				minorColumn=0;
				minorRow++;		
			}		
minor[minorRow][minorColumn++]= array[i][j];
		}
	}
     }
return minor;
}

