t=int(input())

for v in range(t):
    n, k=input().split()
    n, k=int(n), int(k)
    res, last=[], []
    for i in range(n):
        if(i<k):
            res.insert(0,'1')
        else:
            res.insert(0,'0')
        last.append('0')
    print(''.join(res))
    while res!=last:
        dem=0
        for i in range(n-1,-1,-1):
            if res[i]=='1':
                res[i]='0'
                continue
            if res[i]=='0':
                res[i]='1'
                break
        for i in range(n):
            if res[i]=='1':
                dem+=1
            if dem>k:
                break
        if dem==k:
            print(''.join(res))