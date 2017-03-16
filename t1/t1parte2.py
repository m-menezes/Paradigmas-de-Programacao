############## Parte 2 ###############

#p2ex:1
'''Escreva uma fun��o que receba uma lista de nomes e retorne uma lista com a string "Sr. " adicionada ao in�cio de cada nome.'''
def ex1(lis):
    return list(map(lambda lis: 'Sr. ' + lis, lis))

#p2ex:2
'''Escreva uma fun��o que, dada uma lista de n�meros, calcule 3n*2 + 2/n + 1 para cada n�mero n da lista.'''
def ex2(n):
    return map(lambda n: (((3*n)*2) + 2)/(n + 1) ,n)

#p2ex:3
'''Crie uma fun��o que receba uma lista de nomes e retorne outra lista com somente aqueles nomes que terminarem com a letra 'a'.'''
def ex3(lis):
    return filter(lambda lis: lis[-1]=='a', lis)

#p2ex:4
'''Escreva uma fun��o que, dada uma lista de idades de pessoas no ano atual, retorne uma lista somente com as idades de quem nasceu depois de 1970.
Para testar a condi��o, sua fun��o dever� subtrair a idade do ano atual. Exemplo de uso:

>>> idades([20,30,51,57])
[20, 30]
'''
def ex4(n):
    return filter(lambda n: (2017-n) < 1970 ,n)

#p2ex:5
'''O c�digo abaixo � escrito em Python imperativo.
Escreva um c�digo equivalente usando programa��o funcional.

    numbers = [1, 2, 3, 4]
    new_numbers = []
    for number in numbers:
    new_numbers.append(number * 2)
    print(new_numbers)
'''
def ex5(n):
    return map(lambda n: (n*2),n)

