#Tutorial Importar Modulos/Arquivos no Python Windows
#Podemos utilizar o modulo ja existente "os" que permite interagir com o sistema operacional
import os
#entao utilizamos uma das funcoes que e, chdir que permite trocar o diretorio de trabalho
os.chdir('c:/Users/Marcelo/Desktop')
#apos trocar o diretorio conseguimos importar o arquivo com nossas funcoes
import funcoes
#e utiliza-las
funcoes.soma25(5)
