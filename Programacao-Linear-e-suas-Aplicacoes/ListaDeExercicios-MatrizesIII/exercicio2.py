def inversa2x2(A):
    det = A[0][0]*A[1][1]-A[0][1]*A[1][0]
    inv = [[A[1][1],-A[0][1]],[-A[1][0],A[0][0]]]
    for i in range(2):
        for j in range(2):
            inv[i][j]*=1/det
    return inv

A=[[1,2],[4,-1]]
Amult=[[],[]]

for i in range(2):
    for j in range(2):
        Amult[i].append(A[i][j]*1/9)

print(inversa2x2(A)==Amult)
