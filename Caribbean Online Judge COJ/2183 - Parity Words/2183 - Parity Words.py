for i in range(int(raw_input())):
    odds = 0
    evens = 0
    for j in raw_input():
        if ord(j) % 2:
            odds += 1
        else:
        	evens += 1
    if odds >= evens:
        print "Odd"
    else:
        print "Even"