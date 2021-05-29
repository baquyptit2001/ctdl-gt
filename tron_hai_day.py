t=int(input())

for v in range(t):
    n, m = input().split()
    n, m = int(n), int(m)
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    res = a+b
    res.sort()
    for i in res:
        print(i,end=' ')