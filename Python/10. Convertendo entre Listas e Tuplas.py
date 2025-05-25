'''

10. Convertendo entre Listas e Tuplas
Peça ao usuário para criar uma lista com 4 números. Converta essa lista em uma tupla e exiba-a. 
Depois, converta novamente em lista e permita que o usuário adicione um novo número.

'''
print("Insira 4 números para criar uma tupla")
lista = [int(input(f"\tInsira o número {_ + 1}: ")) for _ in range(4)]
tupla = tuple(lista)
print("Eis a lista convertida em tupla:", tupla)
lista = [*tupla]
lista.append(int(input("Agora insira mais um número para a lista: ")))
print("Eis a tupla convertida em lista com o número adicionado:", lista)