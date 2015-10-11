i = 1
out = []
while i <= 5:
    string = raw_input()
    if string.find("FBI") != -1:
        out.append(i)
    i += 1

if len(out) != 0:
    sorted(out)
    print ' '.join(map(str,out))
else:
    print "HE GOT AWAY!"