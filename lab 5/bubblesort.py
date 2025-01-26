import time
import random
def BubbleSort(A):
    n=len(A)
    i=0
    for i in range(n):
        for j in range(n-i-1):
           if(A[j]>A[j+1]):
               A[j],A[j+1]=A[j+1],A[j]
               j+=1
        i+=1 
n=int(input("Enter n "))
A=[random.randint(0,1000) for _ in range(n)]
print(A)
t1=time.time()
BubbleSort(A)
t2=time.time()
print(A)
print(f"Time taken is {t2-t1}")