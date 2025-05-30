'''

Exercício 3: Criar uma Tupla

Peça ao usuário para inserir 4 palavras e armazene-as em uma tupla. Em seguida, exiba a tupla e diga quantas letras tem cada palavra.

'''
print("Digite 4 palavras para adicionar a uma tupla que será exibida a seguir, além da quantidade de letras de cada palavra.")
tupla = tuple(input(f"Digite a palavra {i + 1}: ") for i in range(4))
print("\nEis a tupla gerada:", tupla, "\n")
for palavra in tupla:
    print(f"\tA palavra '{palavra}' tem {len(palavra)} letra(s).")