'''

6. Desempacotando Tuplas
Crie uma tupla fixa com 3 números. Desempacote os valores em variáveis, calcule a soma e exiba o resultado.

'''
print("Insira 3 números para criar uma tupla: ")
tupla = tuple(int(input(f"\tInsira o {i + 1}º número: ")) for i in range(3))
a, b, c = tupla
soma = a + b + c
print(f"Eis a soma dos valores digitados na tupla: {soma}.")