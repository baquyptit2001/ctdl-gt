def solution(a, n):
    max_so_far, cur_max = a[0], a[0]
    for i in range(1,n,1):
        cur_max=max(a[i],cur_max+a[i])
        max_so_far=max(cur_max,max_so_far)
    return max_so_far

t=int(input())

for u in range(t):
    n = int(input())
    a=list(map(int,input().split()))
    print(solution(a,n))