n = int(input())

store = []
res=[]

for i in range(n):
    a = list(map(int, input().split()))
    store.append(a)

for i in range (len(store)):
    a = [0]*n
    for j in range(len(store[i])):
        a[store[i][j]-1] = 1
    res.append(a)

for i in range (len(res)):
    for j in range(len(res[i])):
        print(res[i][j], end=' ')
    print()