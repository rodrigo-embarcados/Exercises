'''
2. Índices de um Valor
Crie uma lista com pelo menos 5 números. Peça ao usuário para inserir um número e exiba o índice da primeira ocorrência dele na lista. Caso não exista, exiba uma mensagem apropriada.
'''
print("Insira 5 números para preencher uma lista:")
lista = [int(input(f"Digite o número {i + 1}: ")) for i in range (5)]
num = int(input("Agora digite um número para saber qual índice dele na lista: "))
if num in lista:
	print(f"O índice do número {num} é {lista.index(num)}.")
else:
	print(f"O número {num} não foi inserido na lista!")