t = input()
temp = 0.0
ind = 0
i = 0
while True:
    if i == t:
        break
    h = input()
    if h >= temp:
        temp = h
        ind = i + 1
    i += 1
print ind