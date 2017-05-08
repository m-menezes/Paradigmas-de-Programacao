#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iterator>
#include <algorithm>

using namespace std;

class Score {
private:
	string atividadeNome; // nome da atividade
	int atividadePontos; // pontos da atividade
public:
	Score(string atividade, int pontos){
		this->atividadeNome = atividade;
		this->atividadePontos = pontos;
	}

	string getAtividadeNome() {
		return atividadeNome;
	}
	int getAtividadePontos() {
		return atividadePontos;
	}
};

class Jogador {
private:
	string nome;		// nome
	vector<Score> pontuacao; 	// pontuacao/atividade
	int pontosTotal = 0 ; 	// total de pontos jogador
public:
	Jogador(string nome, string atividade, int pontos) {
		this->nome = nome;
		this->pontuacaoTotal(pontos);
		Score(atividade, pontos);
	}
	Jogador(string atividade, int pontos) {
		this->pontuacaoTotal(pontos);
		Score(atividade, pontos);
	}
	setNome(string nome){
		this->nome = nome;
	}
	string getNome() {
		return nome;
	}
	int getPontos(){
		return pontosTotal;
	}
	pontuacaoTotal(int pontos){
		this->pontosTotal += pontos;
	}
};

int main(){
	string line;
	string nome;
	string atividade;
	string pontos;
	int contador = 0;
	int score;
	vector<Jogador> jogador;

	//Arquivo com pontuacao
	ifstream data("pontos.csv");
	while (getline(data, line)) {
		stringstream linestream(line);
		getline(linestream, nome, ',');//NOME
		getline(linestream, atividade, ',');//ATIVIDADE
		getline(linestream, pontos, ',');//SCORE
		score = stoi(pontos);//Conversao para int

		jogador.push_back(Jogador(nome, atividade, score));
	}

	vector<Jogador>::iterator it;
	for (it = jogador.begin(); it < jogador.end(); it++){
		cout<< it->getNome() << " ";
		cout<< it->getPontos() << " "<< endl;
	}

	///LARGUEI DE MÃO
	///FAZER TUDO PRA TIRAR NOTA RUIM MESMO :)
}
