t=int(input())

for v in range(t):
    n=int(input())
    print(2**n)
    res, last='',''
    for j in range(n):
        res+='6'
        last+='8'
    print(res,end=' ')
    while res!=last:
        for j in range(n-1,-1,-1):
            if(res[j]=='6'):
                tmp=list(res)
                tmp[j]='8'
                res=''.join(tmp)
                break
            if(res[j]=='8'):
                tmp=list(res)
                tmp[j]='6'
                res=''.join(tmp)
                continue
        print(res,end=' ')
    print()