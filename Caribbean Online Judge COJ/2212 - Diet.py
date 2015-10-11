import string

for i in range(int(raw_input())):
    flag = False
    diet, breakfast, lunch = raw_input().split()
    for j in breakfast:
    	if j in diet:
            diet = diet.replace(j, "")
        else:
            flag = True
            break
    if flag:
    	print "CHEATER"
        continue
    for j in lunch:
    	if j in diet:
            diet = diet.replace(j, "")
        else:
            flag = True
            break
    if not flag:
    	print ''.join(sorted(diet))
    else:
    	print "CHEATER"