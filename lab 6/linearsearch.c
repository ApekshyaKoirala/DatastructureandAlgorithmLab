#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Linearsearch(int A[],int e,int n){
   int flag=0,index;
   for(int i=0;i<n;i++){
    if(e==A[i]){
       flag=1;
       index=i;
    }
   }
   if(flag==1)
      printf("element found on index %d\n",index);
    else
       printf("Element not found\n"); 
}
int main(){
  int A[10000],i,n,e;
  time_t start,end;
  printf("ENter n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    A[i]=rand();
  }
  for(i=0;i<n;i++){
    printf("%d\t",A[i]);
  }
  printf("Enter the element to be found");
  scanf("%d",&e);
  start=time(NULL);
  Linearsearch(A,e,n);
  end=time(NULL);
  printf("The time taken is %.5f" ,difftime(end,start));
  return 0;

  
}