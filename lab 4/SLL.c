#include<stdio.h>
#include<stdlib.h>
typedef struct SLL{
    int data;
    struct SLL *next;
}NodeType;
NodeType *first, *last=NULL;
NodeType *createNode(int element){
  NodeType *NewNode;
    NewNode=(NodeType*)malloc(sizeof(NodeType));
    if(NewNode==NULL){
        return NULL;
    }
    else{
        NewNode->data=element;
        NewNode->next=NULL;
        return NewNode;
    }
}
void InsertB(int element){
    NodeType *NewNode=createNode(element);
        if(NewNode==NULL)
          printf("Memory allocation failed\n");
        else{
            if(first==NULL)
                first=last=NewNode;
            else{
                NewNode->next=first;
                first=NewNode;
            }
            printf("%d was inserted at the beginning\n",first->data);
        }
    }

void InsertE(int element){
    NodeType *NewNode=createNode(element);
        if(NewNode==NULL)
          printf("Memory allocation failed\n");
        else{
            if(first==NULL)
                first=last=NewNode;
            else{
                last->next=NewNode;
                last=NewNode;
            }
            printf("%d was inserted at the end\n",last->data);
        }
    }

void display(){
    NodeType *temp=first;
    do{
       printf("%d->",temp->data);
       temp=temp->next;
    }while(temp!=NULL);
    printf("NULL\n");
}

void InsertSp(int element, int POS){
    NodeType *temp, *tempp;
    NodeType *NewNode=createNode(element);
        if(NewNode==NULL)
          printf("Memory allocation failed\n");
        else{
           
           if(first==NULL)
                first=last=NewNode;
            else{
                 temp=first;
                for(int i=1;i<POS-1;i++){
                    temp=temp->next;
                }
                tempp=temp->next;
                temp->next=NewNode;
                NewNode->next=tempp;

            }  
          }
          printf("%d was inserted in %dth position\n",element,POS);
}

int DeleteB(){
 NodeType *temp;
 int element;
 if(first==NULL){
    printf("List is empty\n");
    return -1;
 }
 else {
    if(first->next==NULL){
        temp=first;
        first=NULL;
        element=temp->data;
        free(temp);
    }
    else{
        temp=first;
        first=first->next;
        element=temp->data;
        free(temp);
    }
    return element;

 }

}
int DeleteE(){
 NodeType *temp;
 int element;
 if(first==NULL){
    printf("List is empty");
    return -1;
 }
 else{
    if(first->next==NULL){
        temp=first;
        first=last=NULL;
        element=temp->data;
        free(temp);
    }
    else{
        temp=first;
        do{
           temp=temp->next;
        }while(temp->next!=last);
        last=temp;
        temp=last->next;
        element=temp->data;
        last->next=NULL;
         free(temp);
        }
      return element;
 }

}
int DeleteSp(int POS){
NodeType *temp,*tempp;
 int element;
 if(first==NULL){
    printf("List is empty");
    return -1;
 }
 else{
    if(first->next==NULL){
        temp=first;
        first=last=NULL;
        element=temp->data;
        free(temp);
    }
    else{
        temp=first;
        for(int i=1;i<POS-1;i++){
            temp=temp->next;
        }
        tempp=temp->next;
        (temp->next)=(tempp->next);
        element=tempp->data;
        free(tempp);

        }
      return element;
}
}

int main(){
    int element, element1,element2,element3,n,c,o,POS,POS1;
    do{ 
    printf("Enter 1 for insertion\nEnter 2 for deletion\nEnter 3 for display\nEnter 4 to exit\n");
    printf("Enter your choice");
    scanf("%d",&n);
    switch(n){
        case 1:{
        printf("Enter the element\n");
        scanf("%d",&element);
        printf("Enter 1 for insertion at the beginning\nEnter 2 for insertion at end\nEnter 3 for insertion at specific position\n");
        scanf("%d",&o);
        switch(o){
          case 1:
              InsertB(element);
              break;
          case 2:
              InsertE(element);
              break;
          case 3:{
            printf("Enter the position\n");
            scanf("%d",&POS);
            InsertSp(element,POS);
            break;
            }
          default:
            break;
        }
        break;
          }
        
          case 2:{
             printf("Enter 1 for deletion from beginning\nEnter 2 for deletion from end\nEnter 3 for deletion from specific position");
             scanf("%d",&c);
             switch(c)
             {
             case 1:{
                element1=DeleteB();
                printf("%d has been deleted \n",element1);
                break;
             }
             case 2:{
               element2=DeleteE();
               printf("%d has been deleted from end\n",element2);
               break;
             }
             case 3:{
                printf("Enter the position from which you want to delete element\n");
                scanf("%d",&POS1);
                element3=DeleteSp(POS1);
                printf("%d has been removed form %d position\n",element3,POS1);
                break;
             }
             default:
                printf("Enter a valid number\n");
                break;
             }
             break;
          }
            case 3:{
              display();
              break;
            }
            case 4: 
               printf("You have extied");
               exit(0);
            default:{
             printf("ENter a valid number\n");
             break;
            }
    }
    }while(n!=4);
    
    
    return 0;
}
