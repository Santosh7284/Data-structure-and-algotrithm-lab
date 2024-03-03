//
//  main.c
//  reverse of the given no
//
//  Created by Santosh Raj on 03/03/2024.
//

#include <stdio.h>
 int sum=0,rem;

int rev(int num){
    if(num==0){
        return sum;}
    
    else{
        rem=num%10;
        sum=sum*10+rem;
        rev(num/10);}
    
        return sum;
        
    
}

int main(){
    int n,r;
    printf("enter the no.");
    scanf("%d",&n);
    r= rev(n);
  
   printf("The number after reversing is :%d",r);
   return 0;
}
