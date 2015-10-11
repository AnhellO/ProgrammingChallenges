while True:
    a1, a2, a3 = map(int, raw_input().split())
    if not a1 and not a2 and not a3:
        break
    if a3 - a2 == a2 - a1:
        print "AP " + str(a3 + (a2 - a1))
    else:
        print "GP " + str(a3 * (a2 / a1))