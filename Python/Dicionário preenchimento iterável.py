dic = {
    chave: int(valor) if valor.isdigit() else valor
    for _ in range(int(input("Quantas chaves deseja adicionar ao dicionário? ")))
    for chave in [input("Insira o nome da chave: ")]
    for valor in [input("Insira o valor correspondente: ")]
}
print("\nEis o dicionário preenchido:")
for chave, valor in dic.items():
    print(f"\t{chave}: {valor}")