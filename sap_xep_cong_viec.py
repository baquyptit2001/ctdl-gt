t = int(input())

for u in range(t):
    n = int(input())
    s = list(map(int,input().split()))
    f = list(map(int,input().split()))
    store = list(zip(s,f))
    store = sorted(store, key = lambda x: x[1])
    mark, res = 0, 1
    for i in range(1,len(store),1):
        if store[i][0]>=store[mark][1]:
            res+=1
            mark=i
    print(res)