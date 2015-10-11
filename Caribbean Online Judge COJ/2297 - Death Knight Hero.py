t = input()
cont = 0
while True:
    if t == 0:
        break
    string = raw_input()
    if not "CD" in string:
        cont += 1
    t -= 1
print cont