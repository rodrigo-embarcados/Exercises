'''

Exercício 4: Valores Pares em uma Lista

Peça ao usuário para inserir 10 números em uma lista. Em seguida, exiba apenas os números pares.

'''
lista = []
print("Digite 10 números inteiros para adicionar a uma lista e será exibido somente os números pares a seguir.")
for _ in range(10):
    numero = int(input(f"Digite o número {_ + 1}: "))
    lista.append(numero)
print("Eis os pares da lista:", [numero for numero in lista if numero % 2 == 0])

'''
ou então:
pares = [numero for numero in lista if numero % 2 == 0]
if pares:
    print("Eis os pares da lista:", pares)
else:
    print("Não há números pares na lista.")

'''