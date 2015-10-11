K = int(raw_input())
K += 1
s = ""
while K > 1:
    if K & 1:
        s = "7" + s
    else:
        s = "4" + s
    K /= 2
print s