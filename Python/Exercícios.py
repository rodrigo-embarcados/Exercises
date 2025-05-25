'''
Exercício 1: Número maior

Crie uma função maior_de_tres(x, y, z) que receba três números inteiros e retorne o maior deles.
'''

def maior_de_tres(x, y, z):
    return max(x, y, z)

numeros = input("Insira três números inteiros separados por espaço e será retornado o maior deles: ")
x, y, z = numeros.split()
x = int(x)
y = int(y)
z = int(z)
maior = maior_de_tres(x, y, z)
print(f"O maior dos números é: {maior}.")


'''
Exercício 2: Par ou ímpar

Crie uma função eh_par(numero) que receba um número inteiro e retorne True se o número for par, ou False caso contrário. 
Utilize essa função para verificar um número informado pelo usuário e exiba uma mensagem apropriada.
'''

def eh_par(num):
    return num % 2 == 0

num = int(input("Insira um número inteiro e será retornado se ele é par ou ímpar: "))

if eh_par(num):
    print(f"O número {num} é par!")
else:
    print(f"O número {num} é ímpar!")

'''
Exercício 3: Verificar idade

Crie uma função verifica_idade(idade) que receba uma idade e retorne:

    "Criança" se a idade for menor que 12;
    "Adolescente" se estiver entre 12 e 17;
    "Adulto" se for maior ou igual a 18.
'''

def verifica_idade(idade):
    if idade >= 18:
        return "Adulto"
    elif idade >= 12:
        return "Adolescente"
    else:
        return "Criança"

idade = int(input("Insira uma idade para saber se é criança, adolescente ou adulto: "))
resposta = verifica_idade(idade)

print(f"A idade corresponde a: {resposta}.")


'''
Exercício 4: Soma de números inteiros

Peça ao usuário para informar dois números inteiros, a e b. Calcule e exiba a soma de todos os números inteiros no intervalo de a até b (inclusive).
'''

numeros = input("Insira dois números separados por espaço e será calculada a soma de todos os números entre eles, incluindo os digitados: ")
a, b = numeros.split()
a = int(a)
b = int(b)

soma = sum(i for i in range(a, b + 1))

print(f"A soma do números do intervalo de {a} até {b} é {soma}.")


'''
Exercício 5: Número primo

Crie uma função eh_primo(numero) que verifique se um número é primo. Utilize essa função para imprimir todos os números primos entre 1 e 100.
'''

def eh_primo(numero):
    if numero < 2:
        return False
    for i in range(2, int(numero ** 0.5) + 1):
        if numero % i == 0:
            return False
    return True


numero = int(input("Insira um número inteiro maior que 1 para verificar se é primo: "))

if numero <= 1:
    print("Insira um número maior que 1.")
    
else:
    if eh_primo:
        print(f"O número {numero} é primo!")
    else:
        print(f"O número {numero} não é primo!")



'''
Exercício 6: Contagem regressiva

Escreva um programa que exiba uma contagem regressiva de 10 até 1, seguida pela mensagem "Feliz Ano Novo!".
'''

for i in range(10, 0, -1):
    print(i, end=" ")
print("\nFeliz Ano Novo!")


'''
Exercício 7: Tabuada personalizada

Crie uma função exibir_tabuada(numero) que receba um número e exiba sua tabuada de 1 a 10. 
O programa deve permitir que o usuário insira diferentes números até digitar 0, que encerra o programa.
'''

def exibir_tabuada(numero):
    for i in range(1, 11):
        print(f"{numero} * {i} = {numero * i}")
        
numero = int(input("Insira um número para exibir sua tabuada. Digite 0 para sair. "))

while numero != 0:
    exibir_tabuada(numero)
    numero = int(input("Insira um número para exibir sua tabuada. Digite 0 para sair. "))



'''
Exercício 8: Soma dos dígitos

Crie uma função soma_digitos(numero) que receba um número inteiro e retorne a soma de seus dígitos. Por exemplo, se o número for 123, a soma será 1 + 2 + 3 = 6.
'''

def soma_digitos(numero):
    soma = 0
    while numero > 0:
        soma += numero % 10
        numero //= 10
    return soma
    
numero = int(input("Insira um número inteiro e será retornado a soma dos seus dígitos: "))

resultado = soma_digitos(numero)

print(f"A soma dos dígitos de {numero} é: {resultado}.")


'''
Exercício 9: Número perfeito

Reescreva o exercício do número perfeito utilizando uma função chamada eh_perfeito(numero) para verificar se o número informado pelo usuário é perfeito.
'''

def eh_perfeito(numero):
    soma = sum(i for i in range(1, numero) if numero % i == 0)
    if soma == numero:
        return True
    else:
        return False

numero = int(input("Insira um inteiro positivo e será verificado se ele é um número perfeito: "))

if eh_perfeito(numero):
    print(f"{numero} é um número perfeito.")
else:
    print(f"{numero} não é um número perfeito.")