//
//  main.c
//  stack
//
//  Created by Santosh Raj on 03/03/2024.
//

#include <stdio.h>

int n,i,a[9],c=0,top=-1;

void push(){
    int x;
   if (top ==n-1){
        printf("\nOverflow!!");
    }
    
   else{
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
      a[top] = x; }
}


void pop(){
    if (top == -1){
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", a[top]);
        top = top - 1; }
}


void peek(){
    printf("the top of the stack is %d\n",a[top]);
}


void show(){
        printf("\nElements present in the stack: \n");
    for (int i = top; i >= 0;i--){
            printf("the value on the index %d is %d\n",i, a[i]);
    }
}



int main(){
    printf("enter the size of stack");
    scanf("%d",&n);
    
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. show\n");
    
    printf("\nPerform operations on the stack:");
    while (c!=4){
        scanf("%d", &c);
        
        switch (c)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                show();
                break;
            case 5:
                printf("exit");
                
            default:
                break;
        }
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. show\n");
        
    }
    return 0;}







