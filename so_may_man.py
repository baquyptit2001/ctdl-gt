t = int(input())

for u in range(t):
    s = int(input())
    dem, mark, k = 0, -1, s
    if s%4==0:
        mark = 0
    while s>0:
        dem+=1
        s-=7
        if (s%4==0 and s>7) or s==4 or s==0:
            mark = dem
    if mark == -1:
        print(-1)
    else:
        res = ''
        for i in range((k-7*mark)//4):
            res+='4'
        for i in range(mark):
            res+='7'
        print(res)