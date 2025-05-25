'''

Exercício 2: Soma dos Valores

Crie um dicionário com 3 números como valores. Some todos os valores e exiba o resultado.

'''
dicionario = {
    "x": int(input("Insira um número para ser o valor da chave x: ")), 
    "y": int(input("Insira um número para ser o valor da chave y: ")),
    "z": int(input("Insira um número para ser o valor da chave z: "))
}
print(f"A soma dos valores das chaves é: {sum(dicionario.values())}.")