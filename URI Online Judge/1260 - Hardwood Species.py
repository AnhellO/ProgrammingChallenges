from sys import stdin

_, _ = input(), input()
species, total = {}, 0
for line in stdin:
    if line == "" or line == "\n":
        print('\n'.join([f"{k} {((v/total) * 100):.4f}" for k, v in sorted(species.items())]))
        print()
        species = {}
        total = 0
        continue
    
    total += 1
    item = line.strip()
    if item not in species.keys():
        species[item] = 1
        continue

    species[item] += 1
        
print('\n'.join([f"{k} {((v/total) * 100):.4f}" for k, v in sorted(species.items())]))
