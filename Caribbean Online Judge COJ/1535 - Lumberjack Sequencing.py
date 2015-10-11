t = input()
print "Lumberjacks:"
while True:
    if t == 0:
        break
    lumberjacks = map(int, raw_input().split())
    if sorted(lumberjacks) == lumberjacks or sorted(lumberjacks, reverse = True) == lumberjacks:
        print "Ordered"
    else:
        print "Unordered"
    t -= 1