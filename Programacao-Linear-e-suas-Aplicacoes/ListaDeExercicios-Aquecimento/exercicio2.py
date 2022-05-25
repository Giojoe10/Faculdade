def somaImposto(taxaImposto, custo):
    custo = custo + custo*taxaImposto/100
    return custo
    
custo = float(input("Insira o custo: "))
taxaImposto = float(input("Insira a taxa do imposto (em %): "))
custo = somaImposto(taxaImposto, custo)
print(f"Custo com imposto incluso: {custo}")