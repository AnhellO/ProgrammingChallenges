t = input()
for i in range(t):
	line = raw_input()
	if len(line) % 2 == 0:
		piece1, piece2 = line[:len(line) / 2], line[len(line) / 2:]
	else:
		piece1, piece2 = line[:len(line) / 2], line[(len(line) / 2) + 1:]
	lower1 = 0
	upper1 = 0
	lower2 = 0
	upper2 = 0
	for j in piece1:
		if j.isupper():
			upper1 += 1
		else:
			lower1 += 1
	for k in piece2:
		if k.isupper():
			upper2 += 1
		else:
			lower2 += 1
	if upper1 == upper2 and lower1 == lower2: 
		print "SI" 
	else: 
		print "NO"