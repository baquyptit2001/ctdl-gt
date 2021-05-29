mod = 10000007

store = [[0]*1100]*1100

def check():
    n, k = input().split()
    n, k = int(n), int(k)
    if k==0 or k==1:
        print(1)
        return
    for i in range(k+1):
        for j in range(i,n+1,1):
            if i==0 or i==j:
                store[i][j] = 1
            else:
                store[i][j] = (store[i - 1][j - 1] + store[i][j - 1]) % mod
    print(store[k][n]%mod)

t = int(input())

for u in range(t):
    check()