'''

### **Exercício 3: Tradutor Simples**
Crie um dicionário que mapeia palavras em inglês para português, por exemplo:
```python
{"dog": "cachorro", "cat": "gato", "bird": "pássaro"}
```
Peça ao usuário para inserir uma palavra em inglês e exiba sua tradução. Se a palavra não existir no dicionário, exiba "Tradução não encontrada".


'''
traducao_animais = {
    "dog": "cachorro",
    "cat": "gato",
    "bird": "pássaro",
    "fish": "peixe",
    "fly": "mosca",
    "human": "humano",
    "elephant": "elefante",
    "whale": "baleia",
    "rabbit": "coelho"
}
print("Insira um nome de um animal em inglês e em letras minúsculas para saber a tradução em português: ", end="")
print(traducao_animais.get(input(""), "Tradução não encontrada!"))