?- trace.					- Chamada da fun��o trace
true.						- Trace ON

[trace]  ?- avo(joao,Y).			- Chamada da fun��o avo
   Call: (8) avo(joao, _584) ? creep		- Substitui Y como uma variavel unica _584
   Call: (9) pai(joao, _802) ? creep		- Chamada da fun��o pai e cria��o da variavel _802
   Exit: (9) pai(joao, jose) ? creep		- Encontrou algum valor compativel com a regra da fun��o "pai(joao, X)"
   Call: (9) pai(jose, _584) ? creep		- Chamada da fun��o pai para verificar se o valor compativel � pai de algum outro valor
   Fail: (9) pai(jose, _584) ? creep		- Sem valor compativel "pai(jose, Z)"
   Fail: (8) avo(joao, _584) ? creep		- Sem valor compativel "avo(joao, Y)"
false.						- Retorno da fun��o avo