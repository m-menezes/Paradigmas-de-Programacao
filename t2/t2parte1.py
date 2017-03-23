# -*- coding: cp1252 -*-
#Variaveis para acesso rapido
strings = ["ola", "mundo", "hello", "world", 'oi', 'eu','ssssssss']
l1 = [1,2,3,4,6]
l2 = [2,3,5,6]
suf = '@inf.ufsm.br'
vogais = 'aeiouAEIOU'
rio = "Rio Grande do Sul"
bina = [1,1,0,1]

'''1 - Defina uma função addSuffix(suf,nomes) que retorne a lista de nomes com o sufixo suf adicionado'''
def addSufix(suf,nome):
    ##Para cada string(x) na lista nome concatena o sufixo(suf)
    return [x+suf for x in nome]
'''2 - Escreva uma função countShorts(words), que receba uma lista de palavras e retorne a quantidade de palavras dessa lista que possuem menos de 5 caracteres.'''
#forma 1
def countShorts1(words):
    #filter(Nome (N Maiusculo), list) retorna apenas os valores true da lista
    return len(filter(None,[len(x)<5 for x in words]))
#forma 2
def countShorts2(words):
    return len(filter(lambda x : x<5,[len(x) for x in words]))
#forma 3
def countShorts3(words):
    return len([x for x in words if len(x)<5])

'''3 - Defina uma função stripVowels(s) que receba uma string e retire suas vogais'''
def stripVowels(s):
    #join une todos elementos da variavel em uma string
    #acrescentando entre eles o que e colocado entre as aspas
    return ''.join([x for x in s if x not in vogais])
    
'''4 - Defina uma função hideChars(s) que receba uma string, possivelmente contendo espaços, e que retorne outra string substituindo os demais caracteres por '-', mas mantendo os espaços.'''
def hideChars(s):
    return ''.join([x if x in ' ' else '-' for x in s])

'''5 - Defina uma função que receba um número n e retorne uma tabela de números de 1 a n e seus quadrados, conforme os exemplos abaixo (você vai usar tuplas em Python):'''
def gentable(n):
    return [(x,x**2) for x in range(1,n+1)]

'''6 - Defina uma função que receba uma lista de palavras e retorne uma string contendo o primeiro e o último caracter de cada palavra da lista. '''
def gencode(lis):
    return ''.join([x[0]+x[-1] for x in lis])

'''7 - Defina uma função myZip(l1,l2) que reproduza o comportamento da função zip do Python'''
def myZip(l1,l2):
    return [(l1[x],l2[x]) for x in range(min([len(l1),len(l2)]))]

'''8 - Escreva uma função enumerate(words) que numere cada palavra da lista recebida'''
def enumerate1(words):
    return [(x+1, words[x]) for x in range(len(words))]

'''9 - Escreva uma função isBin(s) que verifique se a string recebida representa um número binário.'''
def isBin(s):
    return len(([x for x in s if x=='0' or x=='1']))==len(s)

'''10 - Escreva uma função bin2dec(digits), que receba uma lista de dígitos representando um número binário e retorne seu equivalente em decimal.'''
def binDec(x):
        return sum([x[((len(x)-1)-y)]*(2**y) for y in range(len(x))])
        
