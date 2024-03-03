//
//  main.c
//  binary searching
//
//  Created by Santosh Raj on 03/03/2024.
//

#include <stdio.h>
int binary(int arr[],int x,int low, int high){
    while(low<=high){
        int mid =low +(high+low)/2;
        if(arr[mid]==x){
            return mid;
            }
        if(arr[mid]<x)
            low=mid+1;
        else
            high=mid+1;
    }
    return -1;
}

int main(){
    int arr[]={3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=66;
    int result=binary(arr,x,0,n-1);
    if(result==-1)
        printf("not found");
    else
        printf("element found at index %d",result);
    return 0;
}
