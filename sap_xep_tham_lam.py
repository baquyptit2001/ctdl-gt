def ifPossible(a, n, b):
	l, r = 0, n-1
	while l<r:
		if (not((a[l] == b[l] and a[r] == b[r]) or (a[l] == b[r] and a[r] == b[l]))):
			return "No"
		l+=1
		r-=1
	return "Yes"

t = int(input())

for u in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    b=a
    b.sort()
    print(ifPossible(a,n,b))