n, g = map(int, raw_input().split())
p = 0
points = []
aux = n 

while True:
    if n == 0:
        break
    n -= 1
    s, r = map(int, raw_input().split())
    points.append(s - r)
	
points.sort(reverse = True)

i = 0
while True:
    if g == 0 or i == aux:
        break
    if points[i] == 0:
        g -= 1
        points[i] += 1
    elif points[i] < 0:
        while g > 0 and points[i] <= 0:
        	g -= 1
        	points[i] += 1
    i += 1

i = 0
while True:
    if i == len(points):
        break
    if points[i] == 0:
        p += 1
    elif points[i] > 0:
        p += 3
    i += 1

print p