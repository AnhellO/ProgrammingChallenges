from sys import stdin

dictionary = []

# First read and populate dictionary
for line in stdin:
    word = line.strip()
    if word == "X" * 6:
        break
    dictionary.append(word)

# Then unscramble
for line in stdin:
    word = line.strip()
    if word == "X" * 6:
        break
    
    valid = []
    for w in dictionary:
        if sorted(word) == sorted(w):
            valid.append(w)

    if valid == []:
        print("NOT A VALID WORD\n******")
        continue
    
    print("\n".join(sorted(valid)), "*" * 6, sep="\n")