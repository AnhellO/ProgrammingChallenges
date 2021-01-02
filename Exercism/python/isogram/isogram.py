def is_isogram(s):
    s = [c for c in s.upper() if c.isalpha()]
    return len(s) == len(set(s))