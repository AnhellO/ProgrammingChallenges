def bitCount(x):
    return x.count('1')

b = raw_input()
print b
while bitCount(b) > 1:
	n = bitCount(b)
	b = bin(n)
	print b[2:]