import time
import random
def Insertion(A,n):
    for i in range(1,n):
      j=i-1
      curr=A[i]
      while(A[j]>curr and j>=0):
         A[j+1]=A[j]
         j-=1
      A[j+1]=curr

n=int(input("Enter n "))
A=[random.randint(0,1000) for _ in range(n)]
print(A)
t1=time.time()
Insertion(A,n)
t2=time.time()
print(A)
print(f"Time taken is {t2-t1}")