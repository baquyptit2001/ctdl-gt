t = int(input())
for v in range(t):
    n, k = input().split()
    n, k = int(n), int(k)
    a = list(map(int, input().split()))
    Sum = sum(a)
    minus1, minus2 = 0, 0
    a.sort()
    for i in range(k):
        minus1+=a[i]
    for i in range(k):
        minus2+=a[n-i-1]
    print(max(abs((Sum-minus1)-minus1),abs((Sum-minus2)-minus2)))