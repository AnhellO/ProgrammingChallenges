while True:
    try:
        n = int(raw_input())
        if n == 1:
            print 1
        else:
            print n + n - 2
    except EOFError:
        break 