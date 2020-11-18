from sys import stdin
from string import ascii_letters

sieve = [x for x in range(2, 1050) if sum(x%d==0 for d in range(2, 1050)) < 2]

for line in stdin:
    s = 0
    for c in line.strip():
        s += (ascii_letters.index(c) + 1)

    print("It is a prime word." if s in sieve or s == 1 else "It is not a prime word.")
