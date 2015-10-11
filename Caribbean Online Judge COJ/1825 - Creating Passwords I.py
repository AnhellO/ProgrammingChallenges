t = input()
for i in range(t):
    line = raw_input()
    print line[0:3] + line[7:].replace(" ", "*") + line[3:6]