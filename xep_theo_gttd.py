# def bubble(a, n, k):
#     for i in range(n):
#         for j in range(0,n-1-i):
#             if(abs(a[j]-k)>abs(a[j+1]-k)):
#                 a[j], a[j+1] = a[j+1], a[j]

def bubble(arr,n,k):
    for i in range(n): 
        swapped = False
        for j in range(0, n-i-1):
            if abs(arr[j]-k) > abs(arr[j+1]-k) :
                arr[j], arr[j+1] = arr[j+1], arr[j] 
                swapped = True
        if swapped == False: 
            break

t = int(input())

for v in range(t):
    n, k=input().split()
    n,k=int(n), int(k)
    a=list(map(int,input().split()))
    bubble(a,n,k)
    for i in range(n):
        print(a[i],end=' ')
    print()