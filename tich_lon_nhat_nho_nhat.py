import time
time.sleep(1.96)
t = int(input())

for v in range(t):
    n1, n2=input().split()
    n1,n2=int(n1), int(n2)
    a1 = list(map(int,input().split()))
    a2 = list(map(int,input().split()))
    print(max(a1)*min(a2))