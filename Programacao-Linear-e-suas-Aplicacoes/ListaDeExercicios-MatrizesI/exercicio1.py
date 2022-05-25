def criarMatriz(lin):
    matriz=[]
    for lin in range(0,lin):
        matriz.append([])
    return matriz



matriz = criarMatriz(3)
for i in range(0,3):
    for j in range(0,2):
        if i==j:
            matriz[i].append(1)
        else:   
            matriz[i].append((i+1)**2)

for i in range(0,3):
    print(matriz[i])