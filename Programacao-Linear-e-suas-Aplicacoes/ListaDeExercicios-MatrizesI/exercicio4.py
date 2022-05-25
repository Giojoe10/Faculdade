A = [[1,-1,0],[2,3,4],[0,1,-2]]
AT = [[],[],[]]
B = [[],[],[]]

for i in range(0,3):
    for j in range(0,3):
        AT[i].append(A[j][i])


for i in range(0,3):
    for j in range(0,3):
        B[i].append(A[i][j] + AT[i][j])

for i in range(0,3):
    print(B[i])