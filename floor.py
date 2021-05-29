t = int(input())

for v in range(t):
    n, k = input().split()
    n, k = int(n), int(k)
    res = -1
    a = list(map(int, input().split()))
    for i in range(n):
        if(a[i]>k):
            break
        res=i+1
    print(res)