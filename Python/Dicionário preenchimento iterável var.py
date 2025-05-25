dic = {}
for i in range(int(input("Insira quantas chaves deseja ter no dicionário: "))):
    chave = input("Insira o nome da chave: ")
    valor = input("Insira um valor para a chave: ")
    if valor.isdigit():
        valor = int(valor)
    dic[chave] = valor
print("Eis o dicionário preenchido:")
for chave, valor in dic.items():
    print(f"\t{chave}: {valor}")