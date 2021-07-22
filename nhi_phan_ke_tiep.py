t=int(input())

for v in range(t):
    binary = input()
    length = len(binary)
    if binary == '1'*length:
        print('0'*length)
        continue
    number = int(binary,2)
    number+=1
    res=bin(number).replace('0b', '')
    while len(res)<length:
        res='0'+res
    print(res)