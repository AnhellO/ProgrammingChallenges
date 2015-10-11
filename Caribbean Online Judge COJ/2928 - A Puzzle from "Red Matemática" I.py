def sum_digits(n):
   r = 0
   while n:
       r, n = r + n % 10, n / 10
   return r
 
while True:
	d, k = raw_input().split()
	if d == '0' and k == '0':
		break
	d *= int(k)
	power = long(d) ** 2
	print sum_digits(power)