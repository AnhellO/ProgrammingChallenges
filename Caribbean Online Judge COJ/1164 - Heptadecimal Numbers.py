while True:
    num1, num2 = raw_input().split()
    if num1 =='*' and num2 =='*':
        break
    m = len(num1)
    n = len(num2)
    if m < n:
        num1 = (n - m) * '0' + num1
    elif n < m: 
        num2 = (m - n) * '0' + num2           
    if num1 > num2:
        print '>'
    elif num1 == num2:
        print '='
    else:
        print '<' 