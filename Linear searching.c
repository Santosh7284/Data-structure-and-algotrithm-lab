//
//  main.c
//  linear search
//
//  Created by Santosh Raj on 03/03/2024.
//

#include <stdio.h>
int search (int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++)
        if(arr[i]==x)
            return i;
    return -1;}



int main(){
    int arr[]={2,3,4,10,40};
    int x=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=search(arr,n,x);
    (result==-1)
    ?printf("element is not present in array ")
    :printf("element is present at %d ",result);
    return 0;
}
    
