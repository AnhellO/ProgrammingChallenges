from datetime import datetime

t1 = raw_input()
t2 = raw_input()
min1 = t1.split(':')
min2 = t2.split(':')
FMT = '%H:%M'

tdelta = datetime.strptime(t1, FMT) - datetime.strptime(t2, FMT)
s = str(tdelta)

if min1[0] < min2[0] or (min1[0] == min2[0] and min1[1] < min2[1]):
	flag = False
	out = ""
	for i in range(8, len(s) - 3):
		out += s[i]
	print out
else:
	h, m, garbage = s.split(':')
	if len(h) == 1:
		print '0' + h + ':' + m
	else:
		print h + ':'  + m