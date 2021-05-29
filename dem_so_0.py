t=int(input())
for u in range(t):
    n=int(input())
    res=0
    for i in range(n):
        x=int(input())
        if(x==0):
            res+=1
    print(res)