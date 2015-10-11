while True:
    n = int(raw_input())
    if not n:
        break
    cont = 0
    chargingStations = []
    for i in range(n):
		chargingStations.append(int(raw_input()))

    chargingStations = sorted(chargingStations)
    
    for i in range(len(chargingStations) - 1):
		if chargingStations[i + 1] != chargingStations[i] and chargingStations[i + 1] - chargingStations[i] <= 200 and 1422 - chargingStations[-1] <= 100:
			cont += 1
		else:
			break
    if cont == len(chargingStations) - 1:
        print "POSSIBLE"
    else:
        print "IMPOSSIBLE"