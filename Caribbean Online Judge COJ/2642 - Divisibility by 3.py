t = input()
while True:
    if t == 0:
        break
    num = raw_input()
    if int(num, 2) % 3 == 0:
        print "YES"
    else:
        print "NO"
    t -= 1