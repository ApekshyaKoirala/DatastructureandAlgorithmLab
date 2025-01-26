#WAP to compute nth fibonacci term using recursion. Optimize your program using memoization
def fibo(n, memo={}):
    if n==0 or n==1:
       return n

    if n in memo:
      return memo[n]
    
    memo[n]=fibo(n-2)+fibo(n-1)
    return memo[n]

if __name__ =="__main__":
    n=6
    result=fibo(n)
    print(f"The answer of {n}th fibo term is:{result}")