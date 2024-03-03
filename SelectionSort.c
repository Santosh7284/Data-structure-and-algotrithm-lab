#include <stdio.h>
#include <math.h>

void selectionsort (int array[], int size){
	int i,j,imin;
	for(i=0;i<size-1;i++){
		imin=i;
		for(j=i+1;j<size;j++){
			if(array[j]<array[imin]){
				imin=j;
			}
		}
		int temp;
		temp=array[i];
		array[i]=array[imin];
		array[imin]=temp;
	}
}

int main(){
	int n=5;
	int arr [5]={121,19,555,22,16};
	printf("\nBefore Sorting\n");
	int i;
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
		selectionsort(arr,n);
		printf("\nAfter sorting\n");
		for(i=0;i<n;i++){
			printf("%d\n",arr[i]);
		}
		
		
}
