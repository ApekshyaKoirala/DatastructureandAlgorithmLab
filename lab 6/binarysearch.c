#include<stdio.h>
#include<math.h>
void Binarysearch(int A[],int l,int r,int e){
  int flag = 0;
   do{
       
       int m = (l + r) / 2;
       if(A[m]==e){
           flag = 1;
           break;
       }
       else if(A[m]>e){
           r = m-1;
       }
       else{
           l = m+1;
          
       }
   } while (l < r);
    if(flag==0){
        printf("element not found");
    }
    else
        printf("Element found");
}
int main(){
    int A[] = {2, 3, 6, 8, 27, 39, 43, 56};
    int n = sizeof(A)/sizeof(A[0]);
    int e;
    printf("Enter the element you want to search");
    scanf("%d", &e);
    Binarysearch(A, 0, n-1 , e);
    return 0;
    }
