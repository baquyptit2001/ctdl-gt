t = int(input())

for u in range(t):
    s = input()
    s = s.split(' ')
    for i in range(len(s)-1, -1, -1):
        print(s[i], end=' ')
    print()