t = input()
for i in range(t):
	word = raw_input()
	lower = upper = 0
	for j in range(len(word)):
		if word[j].isupper():
			upper += 1
		else:
			lower += 1
	if upper == lower: 
		print "SI" 
	else: 
		print "NO"