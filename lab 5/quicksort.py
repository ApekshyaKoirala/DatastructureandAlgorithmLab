import time
import random
def partition(A,l,r):
    x=l
    y=r 
    pivot=A[l]
    while(x<y):
        while(A[x]<=pivot and x<=r):
            x+=1
        while(A[y]>pivot and y>=1):
            y-=1
        if(x<y):
            A[x],A[y]=A[y],A[x]

        A[l],A[y]=A[y],A[l]
        return y

def Quicksort(A,l,r):
    if l<r:
     p=partition(A,l,r)
     Quicksort(A,l,p-1)
     Quicksort(A,p+1,r)

n=int(input("enter a number"))
A=[random.randint(0,1000) for _ in range(n)]
print(A)
t1=time.time()
Quicksort(A,0,len(A)-1)
t2=time.time()
print(A)
print(f"Time difference ={t2-t1} seconds")