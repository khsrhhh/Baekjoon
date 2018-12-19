N = int(input(''))
L = []

for i in range(N):
    data = int(input(''))
    L.append(data)

L.sort()

for i in range(N):
    print(L[i])
