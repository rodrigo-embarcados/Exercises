'''
5. Concatenar e Repetir Tuplas
Peça ao usuário para criar duas tuplas com 3 palavras cada. Depois, exiba:

As duas tuplas concatenadas.

A primeira tupla repetida 3 vezes.
'''
print("Insira no total 6 palavras que serão inseridas em 2 tuplas diferentes: ")
tupla1 = tuple(input(f"Insira a {i + 1}ª palavra: ") for i in range(3))
tupla2 = tuple(input(f"Insira a {i}ª palavra: ") for i in range(4, 7))
print("Veja as duas tuplas juntas:", tupla1 + tupla2)
print("Agora a primeira tupla repetida 3 vezes:", tupla1 * 3)