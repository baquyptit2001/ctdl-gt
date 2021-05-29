t = int(input())

for v in range(t):
    gray, bina = input(), ''
    bina+=gray[0]
    for i in range(1,len(gray),1):
        if gray[i] == '1':
            if bina[len(bina)-1] == '1':
                bina+='0'
            else:
                bina+='1'
        else:
            if bina[len(bina)-1] == '1':
                bina+='1'
            else:
                bina+='0'
    print(bina)