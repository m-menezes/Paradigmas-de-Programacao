#!/usr/bin/env python3
# -*- coding: cp1252 -*-
from lxml import html, etree
import requests

hexadecimal = ['20','21','22','23','24','25','26','27','28','29','2a','2b','2c','2d','2e','2f',\
               '30','31','32','33','34','35','36','37','38','39','3a','3b','3c','3d','3e','3f',\
               '40','41','42','43','44','45','46','47','48','49','4a','4b','4c','4d','4e','4f',\
               '50','51','52','53','54','55','56','57','58','59','5a','5b','5c','5d','5e','5f',\
               '60','61','62','63','64','65','66','67','68','69','6a','6b','6c','6d','6e','6f',\
               '70','71','72','73','74','75','76','77','78','79','7a','7b','7c','7d','7e','7f']
ascii = [' ','!','"','#','$','%','&',"'",'(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@',\
'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','/',']','^','_','`','a','b','c','d',\
'e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','DEL']

   
def hexascii(texto):
   textofiltro = "".join([texto[x]for x in range((texto.find(':')+2),texto.find('-->')-1)])
   aux = textofiltro.split(' ')
   return ''.join([ascii[y] for x in range(len(aux)) for y in range(len(ascii)) if aux[x] == hexadecimal[y]])

   
def main():
   url = 'http://desafio-paradigmas.appspot.com'
   page = requests.get(url)
   texto = page.text
   print "Texto HTML:\n\n", page.text
   
   coment =  "".join([texto[x]for x in range((texto.find(':')+2),texto.find('-->')-2) if texto[x]!=' '])
   print 'Convertido pelo decode:\n\n', coment.strip().decode('hex')
   
   convertido = hexascii(texto)
   
   print '\n\nConvertido pelo função criada:\n\n', convertido

if __name__ == '__main__':
   main()


##
##nao possui barra(\) troquei pela / pq nao tava aceitando
##comeco tabela ascii nao texto
##'0','1','2','3','4','5','6','7','8','9','0A','0B','0C','0D','0E','0F','10','11','12','13','14','15','16','17','18','19','1A','1B','1C','1D','1E','1F',
