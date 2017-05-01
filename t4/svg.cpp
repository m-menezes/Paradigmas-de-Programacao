#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

//Minhas Classes
#include "functionPoint.hpp"
#include "functionCircle.hpp"

//Cria um numero double randomico
double randNumber(){
    return ((double) rand() / (RAND_MAX)) + rand()%300;
}
void iniciaSvgDoc(ofstream& entrada){
    auto n = 800;
    entrada << "<!DOCTYPE html><html><body>";
    entrada << "<svg  xmlns='http://www.w3.org/2000/svg' height='" << n << "' width='" << n << "'>" << endl;
}
void imprimeCircle(Circle* circulo,ofstream& entrada){
    entrada << "<circle cx='" << circulo->pontoCentral.getX() << "' cy='" << circulo->pontoCentral.getY();
    entrada << "' r='"<< circulo->getRaio() << "' style='stroke: rgb("<< (int)randNumber() << ","<< (int)randNumber() << ","<< (int)randNumber() << ");'";
    entrada << " stroke-width='3' fill='transparent' />" << endl;
}
void imprimeLine(Circle* circulo1, Circle* circulo2, ofstream& entrada){
    entrada << "<line x1='"<< circulo1->pontoCentral.getX() << "' y1='" << circulo1->pontoCentral.getY();
    entrada << "' x2='"<< circulo2->pontoCentral.getX() << "' y2='" << circulo2->pontoCentral.getY()<< "'";
    entrada << " style='stroke:rgb("<< (int)randNumber() << ","<< (int)randNumber() << ","<< (int)randNumber() << "); stroke-width:2' />";
}
void terminaSvgDoc(ofstream& entrada){
    entrada << "</svg>" << endl;
    entrada << "</body></html>";
}
//Adiciona valores randomicos para os n circulos
void circleGeneretor(Circle* circulo,int n){
    for(auto i = 0; i < n; i++){
        circulo[i] = Circle(randNumber(),randNumber(),randNumber());
    }
}

using namespace std;
int main(){
    int n;
    // inicializa random
    srand (time(NULL));
    //Abre arquivo para salvar os dados
    ofstream entrada {"circulo.svg"};
    //Verificação de arquivo abriu ou não
    if(entrada.is_open() == false){
        cout << "Nao foi possivel abrir arquivo!" << endl;
        exit(-1);
    }
    //Recebe quantos circulos deseja
    cout << "Quantos circulos deseja?" << endl;
    cin >> n;
    //Adiciona as tags iniciais no arquivo
    iniciaSvgDoc(entrada);
    //Cria um vetor - n circulos
    Circle* circulo = new Circle[n];
    //Gerador de circulos
    circleGeneretor(circulo, n);
    //Envia pro arquivo os dados dos circulos
    for(auto i = 0; i < n; i++){
        imprimeCircle(&circulo[i], entrada);
        //Gera linha até um a menos que o total de circulos
        if(i+1<n){
            imprimeLine(&circulo[i], &circulo[i+1], entrada);
        }
    }
    //Adiciona as tags finais no arquivo
    terminaSvgDoc(entrada);
    //Destroi os circulos
    delete[] circulo;
    return(0);
}
