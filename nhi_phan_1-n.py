t =int(input())

for u in range(t):
    n = int(input())
    for i in range(1,n+1,1):
        print(bin(i).replace('0b', ''),end=' ')
    print()