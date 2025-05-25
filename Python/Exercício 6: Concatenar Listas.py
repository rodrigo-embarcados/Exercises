'''

Exercício 6: Concatenar Listas

Peça ao usuário para criar duas listas com 3 números inteiros cada. Depois, concatene as duas listas em uma só e exiba o resultado.

'''
print("Insira 3 números inteiros para 2 listas cada. Será exibido uma lista com todos os números das 2 listas juntas:")
lista1 = []
lista2 = []
for _ in range(3):
    numero = int(input(f"Digite o número {_ + 1} da lista 1: "))
    lista1.append(numero)
for _ in range(3):
    numero = int(input(f"Digite o número {_ + 1} da lista 2: "))
    lista2.append(numero)
print("As duas listas juntas:", lista1+lista2)