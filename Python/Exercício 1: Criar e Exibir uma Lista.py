'''
Exercício 1: Criar e Exibir uma Lista

Peça ao usuário para inserir 5 números inteiros e armazene-os em uma lista. Em seguida, exiba a lista.

'''

lista = []
print("Digite 5 números para adicionar a uma lista que será exibida a seguir.")
for _ in range(5):
    numero = int(input("Digite um número: "))
    lista.append(numero)
print("Eis a lista:", lista)