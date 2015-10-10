def base10toN(num, base):
    converted_string, modstring = "", ""
    currentnum = num
    if not 1 < base < 37:
        raise ValueError("Base must be between 2 and 36")
    if not num:
        return '0'
    while currentnum:
        mod = currentnum % base
        currentnum = currentnum // base
        converted_string = chr(48 + mod + 7*(mod > 10)) + converted_string
    return converted_string

while True:
    num = raw_input()
    if int(num) < 0:
        break
    print base10toN(int(num), 3)