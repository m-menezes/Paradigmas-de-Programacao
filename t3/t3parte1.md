## Trabalho 3: Predicados em Prolog

*Considere a seguinte base de fatos e regras:*

```prolog
pai(roberto,joao).
pai(joao, jose).
pai(roberto,julio).
pai(julio,marcos).
pai(julio,mario).
avo(X,Z) :- pai(X,Y), pai(Y,Z).
```
*Mostre o trace comentado das consultas:*
```prolog
?- avo(joao,Y).
false.
?- avo(roberto,Y).
Y = jose ;
Y = marcos ;
Y = mario.
```
*Execução:*

Codigo | Comentário
---------- | ----------
```?- trace. ```| Chamada da função trace
```true.```| Trace ON
```[trace]  ?- avo(joao,Y). ```| Chamada da função avo
```   Call: (8) avo(joao, _584) ? creep ```| Substitui Y como uma variavel unica _584
```   Call: (9) pai(joao, _802) ? creep ```| Chamada da função pai e criação da variavel _802
```   Exit: (9) pai(joao, jose) ? creep ```| Encontrou algum valor compativel com a regra da função "pai(joao, X)"
```   Call: (9) pai(jose, _584) ? creep ```| Chamada da função pai para verificar se o valor compativel é pai de algum outro valor
```   Fail: (9) pai(jose, _584) ? creep ```| Sem valor compativel "pai(jose, Z)"
```   Fail: (8) avo(joao, _584) ? creep ```| Sem valor compativel "avo(joao, Y)"
``` false. ``` | Retorno da função avo
