t = int(input())

for u in range(t):
    s = input()
    mark = len(s)
    s = int(s,2)
    if s==0 :
        for i in range(mark):
            print(1, end='')
        print()
        continue
    s-=1
    s = bin(s)
    s = s.replace('0b', '')
    for i in range(len(s), mark, 1):
        s = '0'+s
    print(s)