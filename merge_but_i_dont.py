t=int(input())

for v in range(t):
    n=int(input())
    res = list(map(int,input().split()))
    res.sort()
    out=""
    for i in range(n):
        out+=str(res[i])+' '
    print(out)