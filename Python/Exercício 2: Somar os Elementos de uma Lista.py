'''

Exercício 2: Somar os Elementos de uma Lista

Peça ao usuário para inserir números inteiros em uma lista (até digitar 0). Em seguida, exiba a soma de todos os números inseridos.

'''

lista = []
print("Digite números inteiros para adicionar a uma lista. Será exibido a soma de todos os números. Pressione 0 para sair.")

while True:
    numero = int(input("Digite um número: "))
    if numero == 0:
        break
    lista.append(numero)

print("Os números digitados foram:", lista)

soma = sum(lista)

print(f"A soma de todos números digitados é: {soma}")