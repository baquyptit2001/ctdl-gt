t=int(input())

for v in range(t):
    n=int(input())
    sum, mul=0, 2
    for h in range(n):
        sum+=mul
        mul*=2
    print(sum)
    for i in range(n,0,-1):
        res, last='',''
        for j in range(i):
            res+='8'
            last+='6'
        print(res,end=' ')
        while res!=last:
            for j in range(i-1,-1,-1):
                if(res[j]=='8'):
                    tmp=list(res)
                    tmp[j]='6'
                    res=''.join(tmp)
                    break
                if(res[j]=='6'):
                    tmp=list(res)
                    tmp[j]='8'
                    res=''.join(tmp)
                    continue
            print(res,end=' ')
    print()