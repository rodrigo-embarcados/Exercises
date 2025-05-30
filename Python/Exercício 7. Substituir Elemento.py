'''

Exercício 7: Substituir Elemento

Crie uma lista com 5 elementos (você pode defini-los no código). Depois, permita que o usuário substitua um dos valores da lista por outro informado.
Lista inicial: [10, 20, 30, 40, 50]
Qual posição deseja substituir (0 a 4)? 2
Digite o novo valor: 99
Lista atualizada: [10, 20, 99, 40, 50]

'''
print("Insira 5 números inteiros para criar uma lista. Depois você poderá alterar o valor de uma das posições a escolher:")
lista = []
for _ in range(5):
    numero = int(input(f"Digite o número {_ + 1} da lista: "))
    lista.append(numero)
print("Lista inicial:", lista)
pos = int(input("Qual posição você deseja substituir (0 a 4): "))
valor = int(input("Digite o novo valor: "))
lista [pos] = valor
print("Lista atualizada:", lista)