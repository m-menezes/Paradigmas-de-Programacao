strings = ["ola", "mundo", "hello", "world", 'oi', 'eu','ssssssss']
l1 = [1,2,3,4,6]
l2 = [2,3,5,6]
suf = '@inf.ufsm.br'
vogais = 'aeiouAEIOU'
rio = "Rio Grande do Sul"

def addSufix(suf,nome):
    ##Para cada string(x) na lista nome concatena o sufixo(suf)
    return [x+suf for x in nome]

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


def stripVowels(s):
    #join une todos elementos da variavel em uma string
    #acrescentando entre eles o que e colocado entre as aspas
    return ''.join([x for x in s if x not in vogais])
    

def hideChars(s):
    return ''.join([x if x in ' ' else '-' for x in s])


def gentable(n):
    return [(x,x**2) for x in range(1,n+1)]


def gencode(lis):
    return ''.join([x[0]+x[-1] for x in lis])

def myZip(l1,l2):
    return [(l1[x],l2[x]) for x in range(min([len(l1),len(l2)]))]


def enumerate1(words):
    return [(x+1, words[x]) for x in range(len(words))]
    
def isBin(s):
    return len(([x for x in s if x=='0' or x=='1']))==len(s)
