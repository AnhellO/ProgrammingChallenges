a, op, b = raw_input(), raw_input(), raw_input()
if op != '/':
	print eval(a + op + b)
else:
	if a > b:
		print eval(a + op + b)
	elif a == b:
		print 1
	else:
		print "0." + ('0' * (len(str(b)[1:]) - len(str(a)))) + '1' 