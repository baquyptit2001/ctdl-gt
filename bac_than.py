t = int(input())

mod = 1e9+7

for u in range(t):
    n, k = input().split()
    n, k = int(n), int(k)
    f = [0]*100005
    f[0], f[1] = 1, 1
    for i in range(2,n+1,1):
        for j in range(1, min(i,k)+1, 1):
            f[i] += f[i-j]
            f[i] %= mod
    print(int(f[n]))