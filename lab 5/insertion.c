#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Insertion(int A[],int n){
    int i,j,curr,prev;
    for(i=1;i<n;i++){
        prev=i-1;
        curr=A[i];
        while(prev>=0 && A[prev]>curr )
        {
            A[prev+1]=A[prev];
            prev--;
        }
        A[prev+1]=curr;
        
    }
    
}
void display(int A[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
int main()
{
    int i,n;
    time_t start, end;
    int A[200000];
    printf("Enter n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        A[i] = rand();
    display(A,n);
    start = time(NULL);
    Insertion(A,n);
    end = time(NULL);
    display(A,n);
    printf("The time taken is %.5f\n",difftime(end,start));
    return 0;
}