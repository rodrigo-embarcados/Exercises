'''
3. Reverter e Ordenar
Peça ao usuário para inserir 5 números em uma lista. Exiba a lista ordenada em ordem crescente e decrescente.
'''
lista = [int(input("Insira 5 números para preencher uma lista: "))for _ in range(5)]
print("Eis a lista digitada: ", lista)
lista.sort()
print("Eis a lista ordenada de forma crescente: ", lista)
lista.reverse()
print("Eis a lista ordenada de forma decrescente: ", lista )