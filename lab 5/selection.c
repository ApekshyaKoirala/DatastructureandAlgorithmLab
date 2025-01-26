#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Selection(int A[],int n){
    int least, pos,i,j,temp;
    for( i=0;i<n;i++){
        least=A[i];
        pos=i;
        for( j=i+1;j<n;j++){
             if(A[j]<least){
                least=A[j];
                pos=j;
             }
        }

    }
    if(pos!=i){
       temp=A[pos];
       A[pos]=A[i];
       A[i]=temp;
    }
}
void display(int A[], int n){
    int i;
    for( i=0;i<n;i++){
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
    Selection(A,n);
    end = time(NULL);
    display(A,n);
    printf("The time taken is %.5f\n",difftime(end,start));
    return 0;
}