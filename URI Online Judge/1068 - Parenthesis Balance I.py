from sys import stdin
from collections import deque

# EOFException
for line in stdin:
    stack = deque()
    flag = True
    for char in line:
        if char == ')' and not len(stack):
            flag = False
            break
        
        if char == '(':
            stack.append(char)
        
        if char == ')':
            stack.pop()
    
    print("correct" if not len(stack) and flag else "incorrect")
