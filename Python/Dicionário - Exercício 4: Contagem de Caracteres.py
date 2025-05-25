'''

### **Exercício 4: Contagem de Caracteres**
Peça ao usuário para inserir uma palavra. Crie um dicionário onde cada chave seja uma letra da palavra e o valor seja o número de vezes que a letra aparece.  
**Exemplo:**
Entrada: "banana"  
Saída: `{'b': 1, 'a': 3, 'n': 2}`

'''
caractere = {}
palavra = input("Insira uma palavra e será exibido quantas vezes cada letra se repete: ")
for letra in palavra:
    if letra in caractere:
        caractere[letra] += 1
    else:
        caractere[letra] = 1
print(caractere)

'''
Poderia ter feito assim também:
palavra = input("Insira uma palavra e será exibido quantas vezees cada letra se repete: ")
caractere = {letra: palavra.count(letra) for letra in set(palavra)}
print(caractere)
'''