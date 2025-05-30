'''
1. Contando Ocorrências
Peça ao usuário para inserir números em uma lista (até digitar 0). Em seguida, peça um número e exiba quantas vezes ele aparece na lista.
'''
lista = []

while True:
	num = int(input("Insira um número inteiro para ser adicionado a uma lista: "))
	if num == 0:
		break
	lista.append(num)

aux = int(input("Agora insira um número dentre os digitados para saber quantas vezes ele aparece na lista: "))

print(f"O número {aux} aparece {lista.count(aux)} vezes!")