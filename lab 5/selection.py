import time
import random

def SelectionSort(A):
    n=len(A)
    for i in range(n - 1):
      pos=i
      for j in range(i+1,n):
        if A[j]<A[pos]:
          pos=j

      A[i], A[pos]=A[pos], A[i]

n=int(input("Enter a number"))
A=[random.randint(0,1000) for _ in range(n)]
print("original Array",A)
t1=time.time()
SelectionSort(A)
t2=time.time()
print("Sorted array",A)
print(f"Time difference ={t2-t1} seconds")
