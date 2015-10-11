first = raw_input()
second = raw_input()
out1 = ""
out2 = ""
equal = ""
i = 0
while True:
    if i == len(first):
        break
    if not first[i] in second:
        out1 += first[i]
    else:
        equal += first[i]
    i += 1
i = 0
while True:
    if i == len(second):
        break
    if not second[i] in first:
        out2 += second[i]
    i += 1
print("First:" + out1)
print("Second:" + out2)
print("First&Second:" + equal)