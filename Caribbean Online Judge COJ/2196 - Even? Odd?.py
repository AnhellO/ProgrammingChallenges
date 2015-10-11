n = input()
while True:
    if n == 0:
        break
    num = input()
    if num % 2 == 0:
        print "even"
    else:
        print "odd"
    n -= 1