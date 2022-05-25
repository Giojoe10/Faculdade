from exercicio1 import isMultPossible, multiplicarMatrizes


A=[[2,1],[-3,4]]
B=[[0,-1],[2,5]]
C=[[3,0],[6,1]]
Cinv = [[1/3,0],[2,1]]


At=[[],[]]
Bt=[[],[]]
matrizAux=[[],[]]
resultado=[[],[]]
for i in range(0,2):
    for j in range(0,2):
        At[i].append(A[j][i])
        Bt[i].append(B[j][i])
        matrizAux[i].append(B[i][j]+At[i][j])

resultado=multiplicarMatrizes(matrizAux,Cinv)

for i in range(0,2):
    for j in range(0,2):
        matrizAux[i][j]=3*B[i][j]
        resultado[i][j] = resultado[i][j]-matrizAux[i][j]


print(resultado)



