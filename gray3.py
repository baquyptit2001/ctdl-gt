t = int(input())

for v in range(t):
    bina, gray=input(), ''
    for i in range(len(bina)-1,0,-1):
        if bina[i]==bina[i-1]:
            gray='0'+gray
        else:
            gray='1'+gray
    gray=bina[0]+gray
    print(gray)