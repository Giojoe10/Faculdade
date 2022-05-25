def criarMatriz(lin):
    matriz=[]
    for lin in range(0,lin):
        matriz.append([])
    return matriz


matriz = criarMatriz(3)
for i in range(0,3):
    for j in range(0,4):
        if i==j:
            matriz[i].append(i+j)
        else:   
            matriz[i].append((2*i)-(2*j))

for i in range(0,3):
    print(matriz[i])           

print(f"A soma dos elementos a22 e a34 é: {matriz[1][1] + matriz[2][3]}")

