############## Parte 2 ###############

#p2ex:1
'''Escreva uma função que receba uma lista de nomes e retorne uma lista com a string "Sr. " adicionada ao início de cada nome.'''
def ex1(lis):
    return list(map(lambda lis: 'Sr. ' + lis, lis))

#p2ex:2
'''Escreva uma função que, dada uma lista de números, calcule 3n*2 + 2/n + 1 para cada número n da lista.'''
def ex2(n):
    return map(lambda n: (((3*n)*2) + 2)/(n + 1) ,n)

#p2ex:3
'''Crie uma função que receba uma lista de nomes e retorne outra lista com somente aqueles nomes que terminarem com a letra 'a'.'''
def ex3(lis):
    return filter(lambda lis: lis[-1]=='a', lis)

#p2ex:4
'''Escreva uma função que, dada uma lista de idades de pessoas no ano atual, retorne uma lista somente com as idades de quem nasceu depois de 1970.
Para testar a condição, sua função deverá subtrair a idade do ano atual. Exemplo de uso:

>>> idades([20,30,51,57])
[20, 30]
'''
def ex4(n):
    return filter(lambda n: (2017-n) < 1970 ,n)

#p2ex:5
'''O código abaixo é escrito em Python imperativo.
Escreva um código equivalente usando programação funcional.

    numbers = [1, 2, 3, 4]
    new_numbers = []
    for number in numbers:
    new_numbers.append(number * 2)
    print(new_numbers)
'''
def ex5(n):
    return map(lambda n: (n*2),n)

