arr = []
arr = map(int, raw_input().split())
sorting = raw_input()
arr.sort()
a = arr[0]
b = arr[1]
c = arr[2]
out = ""
if sorting[0] == 'A':
    out += str(a) + ' '
elif sorting[0] == 'B':
    out += str(b) + ' '
else:
    out += str(c) + ' '

if sorting[1] == 'A':
    out += str(a) + ' '
elif sorting[1] == 'B':
    out += str(b) + ' '
else:
    out += str(c) + ' '

if sorting[2] == 'A':
    out += str(a)
elif sorting[2] == 'B':
    out += str(b)
else:
    out += str(c)

print out