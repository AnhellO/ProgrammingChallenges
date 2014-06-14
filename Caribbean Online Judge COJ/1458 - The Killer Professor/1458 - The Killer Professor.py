def procedure(x):
	len = 100000
	first = 0
	while len > 0:
		half = len / 2
		middle = first + half
		if (2 ** middle) < X:
			first = middle + 1
			len = len - half - 1
		else:
			len = half
	return first
	
X = int(raw_input(), 2)
print procedure(X)