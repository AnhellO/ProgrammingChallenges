keyboard = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./"

out = ""
for i in raw_input():
    if i != ' ' and i != '\n':
        out += keyboard[keyboard.find(i) - 1]
    else:
        out += i
print out