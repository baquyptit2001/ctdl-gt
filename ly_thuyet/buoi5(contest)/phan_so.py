import math

def phan_tich(tu, mau):
	ef = []
	while tu != 0:
		x = math.ceil(mau / tu)
		ef.append(x)
		tu = x * tu - mau
		mau = mau * x
	for i in range(len(ef)):
		if i != len(ef) - 1:
			print("1/{0} +" .
					format(ef[i]), end = " ")
		else:
			print("1/{0}" .
					format(ef[i]))

t = int(input())
for v in range(t):
    a, b = input().split()
    a, b = int(a), int(b)
    phan_tich(a, b)