n = int(input())

store = []
for i in range(n):
    a = list(map(int, input().split()))
    store.append(a)
for i in range(len(store)-1):
    for j in range(len(store[i])):
        if store[i][j] > i+1:
            print(i+1,store[i][j])