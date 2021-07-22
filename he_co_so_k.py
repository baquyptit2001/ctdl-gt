t = int(input())

for u in range(t):
    k, a, b = input().split()
    res = int(a, int(k)) + int(a, int(k))
    res=bin(res).replace('0b', '')
    print(res)