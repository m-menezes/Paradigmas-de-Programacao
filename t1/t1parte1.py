############## Parte 1 ###############
#ex:1
'''Defina uma função somaQuad(x,y) que calcule a soma dos quadrados de dois números x e y.'''
def somaQuad(x,y):
    return ((x*x)+(y*y))

#ex:2
'''Crie uma função hasEqHeads(l1,l2) que verifique se as listas l1 e l2 possuem o mesmo primeiro elemento.'''
def hasEqHeads(l1,l2):
    return (l1[0] == l2[0])

#ex:3
'''Escreva uma função que receba uma lista de nomes e retorne uma lista com a string "Sr. "
adicionada ao início de cada nome. Defina uma função auxiliar para ajudar neste exercício.'''
def adicionaSr(lis):
    return ('Sr. ' + lis)
def ex3(lis):
    return list(map(adicionaSr, lis))

#ex:4
'''Crie uma função que receba uma string e retorne o número de espaços nela contidos.
Defina uma função auxiliar para ajudar neste exercício.'''
def espaco(string):
    return(' ' == string)
def ex4(string):
    return len(filter(espaco,string))

#ex:5
'''Escreva uma função que, dada uma lista de números, calcule 3n*2 + 2/n + 1 para cada número n da lista.
Defina uma função auxiliar para ajudar neste exercício.'''
def calculo5(n):
    return((((3*n)*2) + 2)/(n + 1))
def ex5(n):
    return map(calculo5,n)

#ex:6
'''Escreva uma função que, dada uma lista de números, retorne uma lista com apenas os que forem negativos.
Defina uma função auxiliar para ajudar neste exercício.'''
def neg(nlis):
    return(nlis<0)
def ex6(n):
    return filter(neg, n)

#ex:7
'''Escreva uma função que receba uma lista de números e retorne somente os que estiverem entre 1 e 100, inclusive.
Defina uma função auxiliar para ajudar neste exercício.'''
def intervalo(nlis):
    return (nlis>=10) and (nlis<=100)
def ex7(n):
    return filter(intervalo,n)

#ex:8
'''Escreva uma função que receba uma lista de números e retorne somente aqueles que forem pares.
Defina uma função auxiliar para ajudar neste exercício.'''
def somentepares(nlis):
    return (nlis%2 == 0)
def ex8(n):
    return filter(somentepares,n)

#ex:9
'''Crie uma função charFound(c,s) que verifique se o caracter c está contido na string. O resultado deve ser True ou False.
Você não deve usar o operador in. Defina uma função auxiliar para ajudar neste exercício.'''
def charFound(c,s):
    def charAux(s):
        return c==s
    return(len(filter(charAux,s))>0)

#ex:10
'''Escreva uma função que receba uma lista de strings e retorne uma nova lista com
adição de marcações HTML (p.ex.: <B> e </B>) antes e depois de cada string.'''
def addhtml(lis):
    return ('<a>' + lis + '</a>')
def ex10(lis):
    return list(map(addhtml, lis))
