import time
import random

def partition(A, l, r):
    x = l
    y = r
    pivot = A[l]
    while(x<y):
        while(A[x]<=pivot and x<=r):
            x+=1
        while(A[y]>pivot and y>=l):
            y-=1
        if(x<y):
            A[x], A[y] = A[y], A[x]
    A[l], A[y] = A[y], A[l]
    return y
        

def qSort(A, l, r):
    if(l<r):
        p = partition(A, l, r)
        qSort(A, l, p-1)
        qSort(A, p+1, r)


n = int(input("Enter n "))
A = []
for i in range(n):
    A.append(random.random())
# print(A)
t1 = time.time()
qSort(A, 0, len(A)-1)
t2 = time.time()
# print(A)
print(f"Time = {t2-t1} seconds")