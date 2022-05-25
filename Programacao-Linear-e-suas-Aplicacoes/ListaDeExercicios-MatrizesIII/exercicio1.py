def determinante(A):
    det = A[0][0]*(A[1][1]*A[2][2] - A[2][1]*A[1][2]) - A[0][1]*(A[1][0]*A[2][2]-A[2][0]*A[1][2]) + A[0][2]*(A[1][0]*A[2][1]-A[2][0]*A[1][1])
    return det

def inversa(A):
    det = determinante(A)
    inv = [[],[],[]]
    if det == 0:
        return "Matriz não tem inversa"
    else:
        inv = [ [(A[1][1]*A[2][2]-A[1][2]*A[2][1]),(A[0][2]*A[2][1]-A[0][1]*A[2][2]),(A[0][1]*A[1][2]-A[0][2]*A[1][1])],
                [(A[1][2]*A[2][0]-A[1][0]*A[2][2]),(A[0][0]*A[2][2]-A[0][2]*A[2][0]),(A[0][2]*A[1][0]-A[0][0]*A[1][2])],
                [(A[1][0]*A[2][1]-A[1][1]*A[2][0]),(A[0][1]*A[2][0]-A[0][0]*A[2][1]),(A[0][0]*A[1][1]-A[0][1]*A[1][0])], ]
        for i in range(3):
            for j in range(3):
                inv[i][j]*=1/det
    return inv



def main():
    A = [[0,1,0],[1,0,0],[0,0,1]]
    B = [[1,1,1],[0,2,3],[5,5,1]]
    C = [[1,-2,-3],[0,-4,4],[0,0,0]]

    print(inversa(A))
    print(inversa(B))
    print(inversa(C))

if __name__ == "__main__":
    main()