def baseN(num, b, numerals="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"):
    return ((num == 0) and numerals[0]) or (baseN(num // b, b, numerals).lstrip(numerals[0]) + numerals[num % b])

while True:
    try:
        n1, n2, n3 = raw_input().split()
        x = int(n1, int(n2))
        s = str(baseN(x, int(n3)))
        if len(s) > 7:
        	print "  ERROR"
        else:
        	print ' ' * (7 - len(s)) + s
    except EOFError:
        break 