def tarecursion(n, accumulator=1):
    if n==0 or n==1:
        return accumulator
    
    return tarecursion(n-1, accumulator*n)
    
    
x=int(input("Enter a number"))
print(tarecursion(x))

