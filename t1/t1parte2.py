############## Parte 2 ###############

#p2ex:1
def ex1(lis):
    return list(map(lambda lis: 'Sr. ' + lis, lis))

#p2ex:2
def ex2(n):
    return map(lambda n: (((3*n)*2) + 2)/(n + 1) ,n)

#p2ex:3
def ex3(lis):
    return filter(lambda lis: lis[-1]=='a', lis)

#p2ex:4
def ex4(n):
    return filter(lambda n: (2017-n) < 1970 ,n)

#p2ex:5
def ex5(n):
    return map(lambda n: (n*2),n)

