'''

9. Removendo Todos os Elementos
Peça ao usuário para inserir números em uma lista (até digitar -1). Exiba a lista, use clear() para esvaziá-la, e mostre o resultado.

'''
lista = []
while True:
    num = int(input("Inserir números em uma lista. Digite -1 para parar: "))
    if num == -1:
        break
    lista.append(num)
print("Eis a lista digitada:", lista)
lista.clear()
print("Agora eis a lista após o comando lista.clear():", lista)