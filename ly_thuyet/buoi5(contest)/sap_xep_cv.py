def printMaxActivities(s , f, n):
    i, res = 0, 1
    for j in range(n):
        if s[j] >= f[i]:
            res+=1
            i = j
    print(res)

t = int(input())
for v in range(t):
    n = int(input())
    s = list(map(int, input().split()))
    f = list(map(int, input().split()))
    printMaxActivities(s , f, n)