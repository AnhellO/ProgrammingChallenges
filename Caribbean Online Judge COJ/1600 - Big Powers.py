def modExp(a, n, mod):
	exp = 1
	x = a % mod
	while n > 0:
		if n % 2:
			exp = (exp * x) % mod
		x = (x * x) % mod
		n /= 2
	return exp
	
while True:
	m, n = map(int, raw_input().split())
	if not n and not m:
		break
	mod = 10
	print modExp(m, n, mod)