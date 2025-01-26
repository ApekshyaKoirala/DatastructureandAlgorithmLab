#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Merge(int A[],int l,int m,int r){
    int i,j,k,B[100000];
    i=l;
    j=m;
    k=l;
    while(i<m&& j<=r){
        if(A[i]<A[j])
           B[k++]=A[i++];
        else
          B[k++]=A[j++];
    }
    for(;i<m;i++,k++)
        B[k]=A[i];
    for(;j<=r;j++,k++)
        B[k]=A[j];
    for(k=l;k<=r;k++)
       A[k]=B[k];

}
void MergeSort(int A[],int l,int r){
    if(l<r){
         int m=(l+r)/2;
         MergeSort(A,l,m);
         MergeSort(A,m+1,r);
         Merge(A,l,m+1,r);
    }
}

void display(int A[], int n){
    for(int i=0;i<n;i++){
        printf("%d  ",A[i]);
    }
    printf("\n");
}
int main(){
    int n,i,A[100000];
    time_t start, end;
    printf("Enter n ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        A[i]=rand();
    }
    display(A,n);
    start = time(NULL);
    MergeSort(A,0,n-1);
    end = time(NULL);
    display(A,n);
    printf("The time taken is %.5f ",difftime(end,start));
    return 0;

}
