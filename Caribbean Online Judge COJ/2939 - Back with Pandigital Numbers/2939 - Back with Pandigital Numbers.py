for i in xrange(int(raw_input())):
	N = bin(int(raw_input()))
	if "01" in N or "10" in N:
		print "YES"
	else:
		print "NO"