t = int(input())

for u in range(t):
    n1, n2,  n3 = input().split()
    n1, n2, n3 = int(n1), int(n2), int(n3)
    l1 = list(map(int, input().split()))
    l2 = list(map(int, input().split()))
    l3 = list(map(int, input().split()))
    store = []
    for i in range(0, n1,1):
        if (l1[i] in l2) and (l1[i] in l3):
            store.append(l1[i])
    store.sort()
    if len(store) == 0:
        print("NO", end='')
    else:
        print(store[0], end=' ')
        for i in range(1,len(store),1):
            if store[i]!=store[i-1]:
                print(store[i], end=' ')    
    print()