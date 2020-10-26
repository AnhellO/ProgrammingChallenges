N = int(input())

while(N):
    mark = [int(i) for i in input().split()]
    leti = [int(i) for i in input().split()]
    scoreM, scoreL, sameM, sameL, bonus = [0 for _ in range(5)]
    
    for i in range(0, N):
        scoreM += mark[i]
        scoreL += leti[i]
        
        if i == 0:
            continue
        
        if mark[i] == mark[i-1]:
            sameM += 1
        else:
            sameM = 0
        
        if leti[i] == leti[i-1]:
            sameL += 1
        else:
            sameL = 0
        
        if sameM == 2 == sameL:
            bonus = 1
            continue
        
        if sameM == 2 and not bonus:
            scoreM += 30
            bonus = 1
        
        if sameL == 2 and not bonus:
            scoreL += 30
            bonus = 1

    if scoreM > scoreL:
        print('M')
    elif scoreL > scoreM:
        print('L')
    else:
        print('T')
        
    N = int(input())