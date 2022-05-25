def isMultPossible(matrizA, matrizB):
    if not isinstance(matrizA,list) or not isinstance(matrizB,list):
        return False
    if len(matrizA)!=len(matrizB):
        return False
    
    for i in range(0,len(matrizA)):
        if len(matrizA[i]) != len(matrizB[i]):
            return False
    


def multiplicarMatrizes(matrizA, matrizB):
    isMultPossible(matrizA,matrizB)
    resultado = []
    numAux=0
    for i in range(len(matrizA)):
        resultado.append([])
        for k in range(len(matrizB[i])):
            numAux=0
            for j in range(len(matrizA[i])):
                numAux+=matrizA[i][j]*matrizB[j][k]
            resultado[i].append(numAux)
        
    return resultado





A=[[2,1],[-3,4]]
B=[[0,-1],[2,5]]
C=[[3,0],[6,1]]

Ct=[[],[]]
matrizAux=[[],[]]

for i in range(0,2):
    for j in range(0,2):
        Ct[i].append(C[j][i])
        matrizAux[i].append(A[i][j]+(B[i][j]-Ct[i][j]))


matrizAux=multiplicarMatrizes(matrizAux,B)

print(matrizAux)

