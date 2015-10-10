import textwrap
    
while True:
    line = raw_input()
    if line == '0':
        break
    g, string = line.split()
    groups = int(g, 10)
    parts = textwrap.wrap(string, len(string) / groups)
    out = ""
    for i in parts:
         i = i[::-1]
         out += i
    print out