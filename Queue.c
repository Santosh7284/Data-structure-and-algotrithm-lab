//
//  main.c
//  queue
//
//  Created by Santosh Raj on 03/03/2024.
//

#include <stdio.h>
int a[100],maxsize,front=0,rear=-1,item;

void enqueue(){
    if (rear == maxsize- 1){
        printf("Overflow \n");}
    else
    {
       printf("Element to be inserted in the Queue\n : ");
        scanf("%d", &item);
        rear = rear + 1;
       a[rear] = item; }
}


void dequeue(){
    if (front >rear)
    {
        printf("Underflow \n");
    
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", a[front]);
        front = front + 1;
    }
}
 
void show(){
    printf("Queue data : \n");
    for (int i = front; i <= maxsize-1; i++){
        printf("%d ", a[i]);}
       
}

int main()
{
    int choice;
    printf("enter the size of queue\n");
    scanf("%d",& maxsize);
    
   do{
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &choice);
        
       switch (choice){
               
           case 1:
               enqueue();
               break;
               
           case 2:
               dequeue();
               break;
               
           case 3:
               show();
               break;
               
           case 4:
               printf("exit");
           default:
           break;}
       } while(choice!=4);
       return 0;
    
}
 

 




