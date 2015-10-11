def baseN(num, b, numerals="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"):
    return ((num == 0) and numerals[0]) or (baseN(num // b, b, numerals).lstrip(numerals[0]) + numerals[num % b])

for i in range(int(raw_input())):
	n, b = map(int, raw_input().split())
	print baseN(n, b)