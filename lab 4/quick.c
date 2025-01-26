#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int partition(int A[], int l, int r)
{
   int x = l;
   int y = r;
   int pivot = A[l];
   int temp;
   while(x<y)
   {
    while(A[x]<=pivot)
        x++;
    while(A[y]>pivot)
        y--;
    if(x<y)
    {
        temp = A[x];
        A[x] = A[y];
        A[y] = temp;
    }
   }
   temp = A[y];
   A[y] = A[l];
   A[l] = temp;
   return y; 
}
void quickSort(int A[], int l, int r)
{
    int p;
    if(l<r)
    {
        p = partition(A,l,r);
        quickSort(A,l,p-1);
        quickSort(A,p+1,r);
    }

}
void display(int A[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");
}
int main()
{
    int i,n;
    time_t start, end;
    int A[300000];
    printf("Enter n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        A[i] = rand();
    //display(A,n);
    start = time(NULL);
    quickSort(A,0,n-1);
    end = time(NULL);
    //display(A,n);
    printf("The time taken is %.5f seconds\n",difftime(end,start));
    return 0;
}