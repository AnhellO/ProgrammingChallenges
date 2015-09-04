from __future__ import print_function
import re
mod = 1000000007
s = raw_input()
elem = re.findall('[a-zA-Z]+|\\d+', s)
for i in elem:
	if i[0] == '1' or i[0] == '0':
		print(int(i, 2) % mod, end='')
	else:
		print(i, end='')