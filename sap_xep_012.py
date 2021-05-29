t=int(input())

for u in range(t):
    n=int(input())
    k, m, h = 0, 0, 0
    x = list(map(int, input().split()))
    for i in range(n):
        if(x[i]==0):
            k+=1
        if(x[i]==1):
            m+=1
        if(x[i]==2):
            h+=1
    res=""
    for i in range(k):
        res+="0 "
    for i in range(m):
        res+="1 "
    for i in range(h):
        res+="2 "
    print(res)