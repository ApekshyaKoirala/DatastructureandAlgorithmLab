import math
def Binarysearch(A,e,l,r):
  
   while l<=r:
        m=math.floor((l+r)/2)
        if A[m]==e:
           print("Element found")
           return
        elif A[m]<e :
            l=m+1
        else:
            r=m-1
   print("Element not found")
    


A=[2,3,5,34,65,89]
n=len(A)
e=int(input("Enter the element you want to find"))
Binarysearch(A,e,0,n-1)




    
