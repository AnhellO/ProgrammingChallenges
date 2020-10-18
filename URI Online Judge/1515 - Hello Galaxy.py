N = int(input())

while(N != 0):
    civilization = []
    for i in range(0, N):
        planet, arrived, years = input().split()
        arrived, years = int(arrived), int(years)
        if civilization == [] or arrived - years < civilization[1]:
            civilization = [planet, arrived - years]
            
    print(civilization[0])

    N = int(input())
    