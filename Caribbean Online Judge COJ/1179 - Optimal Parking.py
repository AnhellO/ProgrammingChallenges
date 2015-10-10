t = input()
while True:
    if t == 0:
        break
    n = input()
    stores = []
    stores = map(int, raw_input().split())
    stores.sort()
    print (stores[-1] - stores[0]) * 2
    t -= 1