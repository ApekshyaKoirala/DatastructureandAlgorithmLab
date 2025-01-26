import time
import random
def Merge(A,l,m,r):
    n1=m-l+1
    n2=r-m
    L=A[l:m+1]
    R=A[m+1:r+1]
    i=j=0
    k=l

    while i<n1 and j<n2:
       if L[i]<=R[j]:
          A[k]=L[i]
          i+=1
       else:
          A[k]=R[j]
          j+=1
       k+=1

    while i<n1:
       A[k]=L[i]
       i+=1
       k+=1
    while j<n2:
       A[k]=R[j]
       j+=1
       k+=1

def Mergesort(A,l,r):
    if(l<r):
     m=(l+r)//2
     Mergesort(A,l,m)
     Mergesort(A,m+1,r)
     Merge(A,l,m,r)

n=int(input("Enter a number"))
A=[random.randint(0,1000) for _ in range(n)]
print(A)
t1=time.time()
Mergesort(A,0,n-1)
t2=time.time()
print(A)
print(f"Time difference ={t2-t1} seconds")