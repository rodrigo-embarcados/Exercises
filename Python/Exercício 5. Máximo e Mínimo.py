'''

Exercício 5: Máximo e Mínimo

Peça ao usuário para inserir números inteiros em uma lista até digitar -1 para sair. Depois, exiba o maior e o menor número da lista.

'''
lista = []
num = None
print("Digite números inteiros para adicionar a uma lista e será exibido o maior e o menor da lista.")
while True:
    num = int(input("Digite um número inteiro. Para parar, digite -1: "))
    if (num == -1):
        break
    lista.append(num)
print(f"O maior valor da lista é: {max(lista)}")
print(f"O menor valor da lista é: {min(lista)}")