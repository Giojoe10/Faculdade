def checarCPF(CPF):
    i=0
    total=0

    for character in CPF[0:11]:
        if character!=".":
            total += int(character)*(10-i)
            i+=1

    resto = total % 11
    if resto == 0 or resto == 1:
        digito1 = 0
    else:
        digito1 = 11-resto

    if int(digito1)!=int(CPF[12]):
        return("Erro1")
        return("CPF INVÁLIDO")

    total=0
    i=0

    for character in CPF[0:13]:
        if character!="." and character!="-":
            total += int(character)*(11-i)
            i+=1

    resto = total % 11

    if resto == 0 or resto == 1:
        digito2 = 0
    else:
        digito2 = 11-resto

    if int(digito2)!=int(CPF[13]):
        return("Erro2")
        return("CPF INVÁLIDO")

    return("CPF Válido")

CPF = input("Digite o CPF, no formato xxx.xxx.xxx-xx: ")
print(checarCPF(CPF))