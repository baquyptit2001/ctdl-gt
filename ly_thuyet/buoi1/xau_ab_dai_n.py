t = int(input())

for v in range(t):
    res, work, last = '', '', ''
    n = int(input())
    for i in range(n):
        work+='A'
        last+='B'
    res+=work+' '
    while work != last:
        l = n-1
        while l>=0:
            if(work[l]=='B'):
                strlst=list(work)
                strlst[l]='A'
                work="".join(strlst)
                l-=1
                continue
            if(work[l]=='A'):
                strlst=list(work)
                strlst[l]='B'
                work="".join(strlst)
                l-=1
                break
        res+=work+' '
    print(res)