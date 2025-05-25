'''
4. Removendo Elementos
Peça ao usuário para inserir números em uma lista (até digitar -1). Em seguida, permita que ele remova um número específico da lista. Exiba a lista antes e depois da remoção.
'''
num = None
lista = []
while True:
	num = int(input("Insira números inteiros para adicionar a uma lista. Digite -1 para parar: "))
	if num == -1:
		break
	lista.append(num)
print("Eis a lista: ", lista)
rem = int(input("Agora escolha um número que será removido em sua primeira ocorrência: "))
lista.remove(rem)
print("Lista atualizada: ", lista)