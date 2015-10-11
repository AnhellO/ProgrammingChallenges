def occurrences(string, sub):
    count = start = 0
    while True:
        start = string.find(sub, start) + 1
        if start > 0:
            count+=1
        else:
            return count

for i in range(int(raw_input())):
    genoma = raw_input()
    print "Case " + str(i + 1)
    for j in range(int(raw_input())):
        oc = occurrences(genoma, raw_input())
        if oc:
            print oc
        else:
        	print "Darwin was right about this creature"