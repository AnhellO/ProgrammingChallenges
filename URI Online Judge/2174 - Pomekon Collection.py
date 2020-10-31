N = int(input())

pokes = set()
while N:
    pokes.add(input())
    N -= 1

print(f"Falta(m) {151-len(pokes)} pomekon(s).")