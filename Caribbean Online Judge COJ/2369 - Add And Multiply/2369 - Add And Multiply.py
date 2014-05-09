for i in range(int(raw_input())):
    a, b, c = map(int, raw_input().split())
    ops = [a * b + c, a * c + b, b * c + a, (a + b) * c, (a + c) * b, (b + c) * a]
    ops.sort()
    print str(ops[0]) + ' ' + str(ops[-1])