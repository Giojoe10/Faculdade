A = [[0,3],[2,-5]]
B = [[-2,4],[0,-1]]
C = [[4,2],[-6,0]]
Cmult = C
D=[[],[]]

for i in range(0,2):
    for j in range(0,2):
        Cmult[i][j]*=4

for i in range(0,2):
    for j in range(0,2):
        D[i].append(A[i][j]+B[i][j]-Cmult[i][j])

print(f"O resultado de A+B-4*C é: {D}")