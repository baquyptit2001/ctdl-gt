t=int(input())

for v in range(t):
    s=input()
    l = len(s)-1
    check = 1
    while l>=0:
        chara = s[l]
        chara = int(chara)
        if check :
            chara+=1
            check = 0
        if chara==2:
            chara
            check = 1
        if(chara==0):
            chara='0'
            s[l]=chara
        if(chara==1):
            chara='1'
            s[l]=chara
        if(check==0):
            break
        l-=1
    print(s)