#include <stdio.h>
//quick sort
void swap (int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	
}
int partion (int arr[], int low, int high){
	int pivot = arr[high];
	int i=(low-1);
	int j;
	for(j=low;j<high;j++){
		if (arr[j]<pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
}

void quicksort( int arr[],int low, int high){
	if(low<high){
		int pi=partion(arr,low,high);
			quicksort(arr,low,pi-1);
			quicksort(arr,pi+1,high);
			}
		}	


int main(){
	int arr []={16,15,2,13,6};
	int n= sizeof(arr)/sizeof(arr[0]);
		quicksort(arr,0,n-1);
			printf("\nSorted Array");
			int i;
			for(i=0;i<n;i++){
				printf("%d\n",arr [i]);
			}
		return 0;
	}

