sumatory = 0.0
i = 0
while True:
    if i == 30:
        break
    sumatory += input()
    i += 1
amount = sumatory
print("%.3f" % round(amount + sumatory / 30.0, 3))