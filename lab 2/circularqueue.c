#include<stdio.h>
#define MAX 5
struct Queue{
    int FRONT;
    int REAR;
    int DATA[MAX];
};


void Enqueue(struct Queue *Q, int element){
    if(Q->FRONT==(Q->REAR+1)%MAX){
         printf("The queue is full and exit\n");
    }
    else{
        Q->DATA[Q->REAR]=element;
        Q->REAR=((Q->REAR+1)%MAX);
        }
}

int Dequeue(struct Queue *Q){
    int element =-1;
   if(Q->REAR==Q->FRONT){
      printf("Queue is empty\n");
      return -1;
   }
   else{
    element=Q->DATA[Q->FRONT];
    Q->FRONT=((Q->FRONT+1)%MAX);
    return element;

   }
}
int main(){
 struct Queue Q={0,0};
 int choice, element;
 do
 {
    printf("Enter 1 if you want to Enqueue\n Enter 2 if you want to Dequeue\n Enter 3 if you want to exit\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
         printf("Enter the element\n");
        scanf("%d",&element);
        Enqueue(&Q, element);
        break;
    
    case 2:
     if(element!=-1){
     element=Dequeue(&Q);
     printf("The element is %d\n",element);
     }
     break;

    
    case 3:
        printf("You have exited\n");
        break;
    
    default:
        printf("PLease enter a valid number\n");
        break;
    }
 }while(choice!=3);
return 0;     
}
