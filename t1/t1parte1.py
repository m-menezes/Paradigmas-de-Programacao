############## Parte 1 ###############
#ex:1
def somaQuad(x,y):
    return ((x*x)+(y*y))

#ex:2
def hasEqHeads(l1,l2):
    return (l1[0] == l2[0])

#ex:3
def adicionaSr(lis):
    return ('Sr. ' + lis)
def ex3(lis):
    return list(map(adicionaSr, lis))

#ex:4
def espaco(string):
    return(' ' == string)
def ex4(string):
    return len(filter(espaco,string))

#ex:5
def calculo5(n):
    return((((3*n)*2) + 2)/(n + 1))
def ex5(n):
    return map(calculo5,n)

#ex:6
def neg(nlis):
    return(nlis<0)
def ex6(n):
    return filter(neg, n)

#ex:7
def intervalo(nlis):
    return (nlis>=10) and (nlis<=100)
def ex7(n):
    return filter(intervalo,n)

#ex:8
def somentepares(nlis):
    return (nlis%2 == 0)
def ex8(n):
    return filter(somentepares,n)

#ex:9

#ex:10
def addhtml(lis):
    return ('<a>' + lis + '</a>')
def ex10(lis):
    return list(map(addhtml, lis))
