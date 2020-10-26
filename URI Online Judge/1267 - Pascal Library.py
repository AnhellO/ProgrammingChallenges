N, D = [int(i) for i in input().split()]

while(N != 0 and D != 0):
    alumni = [True] * N # e.g. alumni = [True, True, True]
    for i in range(0, D):
        student = [int(i) for i in input().split()]
        for j in range(0, N):
            alumni[j] = alumni[j] and student[j]
    
    print("yes" if any(alumni) else "no")
    N, D = [int(i) for i in input().split()]