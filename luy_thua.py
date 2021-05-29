def power(x, y, p=1000000007) :
	res = 1
	x = x % p
	
	if (x == 0) :
		return 0

	while (y > 0) :
		if ((y & 1) == 1) :
			res = (res * x) % p
		y = y >> 1
		x = (x * x) % p
		
	return res


t = int(input())

for u in range(t):
	a=int(input())
	b, k=0, a
	while k>0:
		tmp = k%10
		b=b*10+tmp
		k//=10
	print(power(a,b))