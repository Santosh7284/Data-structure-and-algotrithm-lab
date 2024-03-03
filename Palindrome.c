//
//  main.c
//  palindrome
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
    int n,r,original;
    printf("enter the no.");
    scanf("%d",&n);
    r= rev(n);
    original=n;
    if(r==original){
        printf("palindrome");
        
    }
    else{
        printf("not palindrome");
    }

    
   return 0;
}
