mNums = ["11", "114", "1144", "141", "1414", "14144", "1441", "14414", "144144", "114144", "114414", "141144", "141441", "144114", "144141"]
wrongDigits = ["0", "2", "3", "5", "6", "7", "8", "9", "444", "4111"]
flag = True
mNum = raw_input()
for i in mNums:
    for j in wrongDigits:
        if j in mNum:
            flag = False   
    if mNum == "1" or mNum == "14" or mNum == "144":
        print "YES"
        break
    elif i in mNum and flag:
        print "YES"
        break
if i == mNums[-1]: print "NO"