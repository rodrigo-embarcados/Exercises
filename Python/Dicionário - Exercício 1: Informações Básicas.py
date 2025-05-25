'''

Claro! Aqui estão alguns exercícios simples para praticar o uso de dicionários:
Exercício 1: Informações Básicas

Peça ao usuário para inserir um nome, idade e cidade. Salve essas informações em um dicionário e exiba os dados no formato:

'''
dicionario = {
    "Nome" : input("Insira um nome para adicionar a um dicionário: "),
    "Idade" : int(input("Insira uma idade para adicionar a um dicionário: ")),
    "Cidade" : input("Insira uma cidade para adicionar a um dicionário: ")
}
'''
dicionario["Nome"] = input("Insira um nome para adicionar a um dicionário: ")
dicionario["Idade"] = int(input("Insira uma idade para adicionar a um dicionário: "))
dicionario["Cidade"] = input("Insira uma cidade para adicionar a um dicionário: ")
'''
print("Eis o dicionário preenchido:")
for chave, valor in dicionario.items():
    print(f"\t{chave}: {valor}")