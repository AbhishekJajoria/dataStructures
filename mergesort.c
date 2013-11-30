#include<stdio.h>
#include <stdarg.h>
#define MAX 50
void mergeSort(int* , int , int);
void merge(int* ,int ,int,int);
int temp[MAX];
int main(){
int myArray[6]= {3,5,9,1,2,8};
//merge(myArray,5,2,0);
mergeSort(myArray,5,0);
printf("my array");
return 0;
}
void mergeSort(int* arr,int high,int low){
int mid;
if(low >= high)
return ;
	else
 	mid =  (high + low)/2;

mergeSort(arr,mid,low); 
mergeSort(arr,high,mid+1);

/**	Now merge the two arrays	**/
	merge(arr,high,mid,low);
return ;

}
void merge(int* arr, int high, int mid , int low){
int i = low; 
int mid2 = mid+1;
while(low<=mid&&mid2<=high){
	if(arr[low]<=arr[mid2])
		{
		temp[i++]=arr[low];
		low++;
	}
	else{
		temp[i++]= arr[mid2];
		mid2++;
		}
    }
	if(mid2<=high){
		while(mid2<=high){
		temp[i++] = arr[mid2++]	;	
		}
}
 	else{
		while(low<=mid){
		temp[i++]=arr[low++];
		}
	}
	i--;
	int j=i;
	while(i>=0){
	arr[i--]=temp[j--];

}
}

