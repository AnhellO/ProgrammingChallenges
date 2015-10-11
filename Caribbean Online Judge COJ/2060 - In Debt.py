while True:
    n = input()
    if n == -1:
        break
    museums = map(int, raw_input().split())
    sumatory = 0
    cont = 0
    for i in range(n):
        sumatory += museums[i]
        if sumatory % 100 == 0:
            cont += 1
            sumatory = 0
    print cont