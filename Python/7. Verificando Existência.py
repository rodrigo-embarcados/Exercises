'''

7. Verificando Existência
Peça ao usuário para inserir números em uma lista (até digitar 0). Pergunte um número e exiba se ele está presente na lista.

'''
lista = []
while True:
    num = int(input("Digite números para inserir em uma lista. Para parar, digite 0: "))
    if num == 0:
        break
    lista.append(num)
ver_num = int(input("Agora digite um número para verificar se está na lista: "))
if ver_num in lista:
    print(f"O número {ver_num} está na lista!")
else:
    print(f"O número {ver_num} não está na lista!")