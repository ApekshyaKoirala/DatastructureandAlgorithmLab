import math
def left(i):
    return 2*i
def right(i):
    return 2*i+1
def Max_heapify(A,i,n):
    l=left(i)
    r=right(i)
    largest=i
    if l<=n and A[l]>A[largest]:
        largest=l
    if r<=n and A[r]>A[largest]:
        largest=r
    if largest!=i:
        A[i],A[largest]=A[largest],A[i]
        Max_heapify(A,largest,n)


def Build_maxheap(A):
    n=len(A)
    for i in range(math.floor(n/2)-1,-1,-1):
        Max_heapify(A,i,n)

def Heapsort(A):
    Build_maxheap(A)
    n=len(A)
    for i in range(n-1,0,-1):
        A[0],A[i]=A[i],A[0]
        Max_heapify(A,0,i)    
    
A=[25,3,17,48,70,325,19,13]
Heapsort(A)
print(A)