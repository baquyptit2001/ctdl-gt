t = int(input())

for v in range (t):
    n = int(input())
    a = list(map(int,input().split()))
    b=a
    b.sort()
    # l, r = -1, -1
    # for i in range(n):
    #     if(a[i]!=b[i]):
    #         l=i+1
    #         break
    # for i in range(n-1,-1,-1):
    #     if(a[i]!=b[i]):
    #         r=i+1
    #         break
    print(a,b)