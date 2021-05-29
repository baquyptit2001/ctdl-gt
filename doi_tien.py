t=int(input())

while t:
    n=int(input())
    res=0
    while n>=1000:
        if(n == 0):
            break
        n-=1000
        res+=1
    while n>=500:
        if(n == 0):
            break
        n-=500
        res+=1
    while n>=200:
        if(n == 0):
            break
        n-=200
        res+=1
    while n>=100:
        if(n == 0):
            break
        n-=100
        res+=1
    while n>=50:
        if(n == 0):
            break
        n-=50
        res+=1
    while n>=20:
        if(n == 0):
            break
        n-=20
        res+=1
    while n>=10:
        if(n == 0):
            break
        n-=10
        res+=1
    while n>=5:
        if(n == 0):
            break
        n-=5
        res+=1
    while n>=2:
        if(n == 0):
            break
        n-=2
        res+=1
    while n>=1:
        if(n == 0):
            break
        n-=1
        res+=1
    print(res)
    t-=1