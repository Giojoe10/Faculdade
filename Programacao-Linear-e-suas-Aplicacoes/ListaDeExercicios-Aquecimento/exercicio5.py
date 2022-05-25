quadradoMagico=[1,1,1,1,1,1,1,1,1]

while quadradoMagico!=[9,9,9,9,9,9,9,9,9]:
    if ((quadradoMagico[0]+quadradoMagico[1]+quadradoMagico[2])==(quadradoMagico[3]+quadradoMagico[4]+quadradoMagico[5])==(quadradoMagico[6]+quadradoMagico[7]+quadradoMagico[8])==(quadradoMagico[0]+quadradoMagico[3]+quadradoMagico[6])==(quadradoMagico[1]+quadradoMagico[4]+quadradoMagico[7])==(quadradoMagico[2]+quadradoMagico[5]+quadradoMagico[8])==(quadradoMagico[0]+quadradoMagico[4]+quadradoMagico[8])==(quadradoMagico[2]+quadradoMagico[4]+quadradoMagico[6])):
        print("-------")
        print(f"|{quadradoMagico[0]} {quadradoMagico[1]} {quadradoMagico[2]}|")
        print(f"|{quadradoMagico[3]} {quadradoMagico[4]} {quadradoMagico[5]}|")
        print(f"|{quadradoMagico[6]} {quadradoMagico[7]} {quadradoMagico[8]}|")
        print("-------")
    
    i=8
    if quadradoMagico[i]<9:
        quadradoMagico[i]=quadradoMagico[i]+1
    else:
        while quadradoMagico[i]>=9:
            quadradoMagico[i]=0
            i-=1
        quadradoMagico[i]=quadradoMagico[i]+1

    