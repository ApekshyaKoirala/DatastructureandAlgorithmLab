def find_hcf(a,b):
    while a!=0:
     temp=a
     a=b%a
     b=temp
    return b


def hCF(a,b):
    if b==0:
      return a
    return hCF(b,a % b)
   
x=int(input("Enter a number"))
y=int(input("Enter another number"))
print(hCF(x,y))
         