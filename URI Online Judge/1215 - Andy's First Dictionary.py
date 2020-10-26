import re
from sys import stdin

words = set()
for line in stdin:
    # Tested regexp: https://regex101.com/r/OiEimC/1
    words.update(s.lower() for s in re.split(r'[^a-zA-Z]+', line))

print('\n'.join(word for word in sorted(words) if word != ''))