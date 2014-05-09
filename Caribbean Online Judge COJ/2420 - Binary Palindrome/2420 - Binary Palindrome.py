def baseN(num, b, numerals="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"):
    return ((num == 0) and numerals[0]) or (baseN(num // b, b, numerals).lstrip(numerals[0]) + numerals[num % b])

for i in range(int(raw_input())):
	binStr = baseN(int(raw_input()), 2)
	if binStr == binStr[::-1]:
		print "YES"
	else:
		print "NO"