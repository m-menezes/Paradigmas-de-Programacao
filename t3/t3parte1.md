## Trabalho 3: Predicados em Prolog
**Exercicio 1**<br>
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
```prolog
[trace]  ?- avo(joao,Y).			- Chamada da função avo
   Call: (8) avo(joao, _584) ? creep		- Substitui Y como uma variavel unica _584
   Call: (9) pai(joao, _802) ? creep		- Chamada da função pai e criação da variavel _802
   Exit: (9) pai(joao, jose) ? creep		- Encontrou algum valor compativel com a regra da função "pai(joao, X)"
   Call: (9) pai(jose, _584) ? creep		- Chamada da função pai para verificar se o valor compativel é pai de algum outro valor
   Fail: (9) pai(jose, _584) ? creep		- Sem valor compativel "pai(jose, Z)"
   Fail: (8) avo(joao, _584) ? creep		- Sem valor compativel "avo(joao, Y)"
false.						- Retorno da função avo
```
**Exercicio 2**<br>
   Considere o predicado definido abaixo, que resolve um problema de uma prova da Olimpíada Brasileira de Informática.
   ```prolog
azulejos(0,0).
azulejos(Na,Nq) :-
   Na > 0,
   Q is floor(sqrt(Na)),
   R is Na - Q*Q,
   azulejos(R,C),
   Nq is 1 + C.
   ```
  *Execução:* 
   ```prolog
   [trace]  ?- azulejos(120,A).
   Call: (8) azulejos(120, _584) ? creep
   Call: (9) 120>0 ? creep
   Exit: (9) 120>0 ? creep
   Call: (9) _812 is floor(sqrt(120)) ? creep
   Exit: (9) 10 is floor(sqrt(120)) ? creep
   Call: (9) _824 is 120-10*10 ? creep
   Exit: (9) 20 is 120-10*10 ? creep
   Call: (9) azulejos(20, _826) ? creep
   Call: (10) 20>0 ? creep
   Exit: (10) 20>0 ? creep
   Call: (10) _832 is floor(sqrt(20)) ? creep
   Exit: (10) 4 is floor(sqrt(20)) ? creep
   Call: (10) _844 is 20-4*4 ? creep
   Exit: (10) 4 is 20-4*4 ? creep
   Call: (10) azulejos(4, _846) ? creep
   Call: (11) 4>0 ? creep
   Exit: (11) 4>0 ? creep
   Call: (11) _852 is floor(sqrt(4)) ? creep
   Exit: (11) 2 is floor(sqrt(4)) ? creep
   Call: (11) _864 is 4-2*2 ? creep
   Exit: (11) 0 is 4-2*2 ? creep
   Call: (11) azulejos(0, _866) ? creep
   Exit: (11) azulejos(0, 0) ? creep
   Call: (11) _870 is 1+0 ? creep
   Exit: (11) 1 is 1+0 ? creep
   Exit: (10) azulejos(4, 1) ? creep
   Call: (10) _876 is 1+1 ? creep
   Exit: (10) 2 is 1+1 ? creep
   Exit: (9) azulejos(20, 2) ? creep
   Call: (9) _584 is 1+2 ? creep
   Exit: (9) 3 is 1+2 ? creep
   Exit: (8) azulejos(120, 3) ? creep
A = 3 .
```
