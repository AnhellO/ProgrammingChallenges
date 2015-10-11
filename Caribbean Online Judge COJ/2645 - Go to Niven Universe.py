while True:
    line = raw_input()
    if line == '0':
        break
    b, num = line.split()
    base = int(b, 10)
    sumatory = 0
    for i in num:
        if i != '0':
            sumatory += int(i, 10)
    if int(num, base) % sumatory == 0:
        print "YES"
    else:
        print "NO"