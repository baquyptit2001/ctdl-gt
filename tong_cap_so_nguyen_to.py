import math

def nt(n):
    if n<2:
        return 0
    for i in range(2,math.isqrt(n)+1,1):
        if(n%i==0):
            return 0
    return 1

t = int(input())

for v in range(t):
    n=int(input())
    res=-1
    for i in range(2,n//2+1,1):
        if nt(i) and nt(n-i):
            res=i
            break
    if res == -1:
        print(-1)
    else:
        print(res,n-res)