def check(s):
    for i in range(0,len(s)//2,1):
        if s[i] != s[len(s)-1-i]:
            return 0
    return 1

n = int(input())
beg, last = '', ''
for i in range(n):
    beg+='0'
    last+='1'
    print('0', end=' ')
print()
while beg!=last:
    for i in range(n-1,-1,-1):
        if beg[i]=='1':
            li=list(beg)
            li[i]='0'
            beg=''.join(li)
            continue
        li=list(beg)
        li[i]='1'
        beg=''.join(li)
        break
    if check(beg):
        for i in range(n):
            print(beg[i], end=' ')
        print()