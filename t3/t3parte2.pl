%Exerc1 - Defina um predicado somaQuad(X,Y,Q) que seja verdadeiro se Q
% for a soma dos quadrados de X e Y.
somaQuad(X,Y,Q):-
    quad(Y, R1),
    quad(X, R2),
    Q is R1+R2.

quad(A,R):-
    R is A*A.

% Exerc2 - Defina um predicado zeroInit(L) que � verdadeiro se L for uma
% lista que inicia com o n�mero 0 (zero).
zeroInit(L):-
    L = [H|_],
    H=0.

% Exerc3 - Defina um predicado hasEqHeads(L1,L2) que seja verdadeiro se
% as listas L1 e L2 possu�rem o mesmo primeiro elemento.
hasEqHeads(L1,L2):-
    L1 = [H1|_],
    L2 = [H2|_],
    H1 = H2.
% Exerc4 - Defina um predicado has5(L) que seja verdadeiro se L for uma
% lista de 5 elementos. Lembre de como funciona a unifica��o em Prolog e
% resolva este exerc�cio sem usar o predicado pr�-definido length.
myLength([],0).
myLength([_|T],R):-
    myLength(T,S),
    R is S + 1.

has5(L):-
    myLength(L,R),
    R=5.

% Exerc5 - Defina um predicado hasN(L,N) que seja verdadeiro se L for uma lista de N elementos. Agora voc� pode usar um predicado pr�-definido.
hasN(L,N):-
    myLength(L,R),
    R=N.
%Exerc6 - Defina um predicado isBin(L) que seja verdadeiro se L for uma lista contendo somente elementos 0 e 1. Use recurs�o.
verBin([]).
verBin([H|T]):-
   H >= 0,
   H =< 1,
   verBin(T).

isBin(L):-
   verBin(L).

%Exerc7 - Defina um predicado mesmaPosicao(A,L1,L2) para verificar se um elemento A est� na mesma posi��o nas listas L1 e L2. Assuma que L1 e L2 sejam permuta��es de uma lista de elementos distintos, sem repeti��es. Dica: procure aux�lio em predicados pr�-definidos.
mesmaPosicao(A,L1,L2):-
   %nth0(Posi��o, Lista, Valor)
    nth0(X1,L1,A),
    nth0(X2,L2,A),
    X2=X1.

%Exerc8 - Defina um predicado repete5(E,L) que seja verdadeiro se a lista L for composta por exatamente 5 repeti��es do elemento E. N�o use recurs�o.
repete5(E,L):-
    X=[E,E,E,E,E],
    L=X.

%Exerc9 - Defina um predicado recursivo sumQuads(L,S) que seja verdadeiro se S for o somat�rio dos quadrados dos elementos da lista L.



