dem=0

def check(x):
    if x=='0':
        dem+=1

t = int(input())

for v in range(t):
    dem=0
    n=input()
    a = list(map(lambda x:check(x), input().split()))
    print(dem)