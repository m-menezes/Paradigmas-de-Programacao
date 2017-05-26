## STD::VECTOR
 É um conteiner sequêncial que encapsula arrays de tamanho dinâmico. Os elementos são armazenados de forma contígua, o que significa que os elementos podem ser acessados através de iteradores e também com deslocamentos em ponteiros. 
 O armazenamento do vector é feita automaticamente, expandindo e contraindo quando necessário. Vetores geralmente ocupam mais espaço do que arrays estáticos, porque mais memória é alocada para lidar com expansão futura. Desta forma, não é necessario realocar cada vez que um elemento é inserido.
 
 Necessita ```#include <vector>```
 
 Possui varias funções membro, segue algumas:
 
 * #### begin
 >Retorna um iterador para o primeiro elemento do vetor
 * #### end
 >Retorna um iterador para o ultimo elemento do vetor
  * #### empty
 >verifica se o vetor está vazio 
  * #### size
 >Retorna o tamanho de elementos existentes no vetor
  * #### insert
 >Insere elemento
  * #### erase
 >Apaga elemento
 
```
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	vector<int> array(3,5);
	for (int i=0; i<5; ++i) {
		try {
			cout << "Elemento " << i << ": " << array.at(i) << endl;
		}
		catch (exception& e) {
			cout << "Elemento " << i << ": Excede a dimensao do vetor." << endl;
		}
	}
	return EXIT_SUCCESS;
}
```
Saida:
```
Elemento 0: 5
Elemento 1: 5
Elemento 2: 5
Elemento 3: Excede a dimensao do vetor.
Elemento 4: Excede a dimensao do vetor.
```

Fonte:
[CPlusPlus](http://www.cplusplus.com/reference/vector/vector/?kw=vector)
[Cppreference](http://pt.cppreference.com/w/cpp/container/vector)