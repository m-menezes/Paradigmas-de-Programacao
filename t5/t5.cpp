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
	string getAtividadePontos() {
		return atividadePontos;
	}
	int getPontosTotal() {
		return pontosTotal;
	}
}

class Jogador {
private:
	string nome;		// nome
	vector<Score> pontuacao; 	// pontuacao/atividade
	int pontosTotal; 	// total de pontos jogador
public:
	Jogador(string nome, string atividade, int pontos) {
		this->nome = nome;
		this->pontuacaoTotal(int pontos);
		Score(atividade, pontos);
	}
	Jogador(string atividade, int pontos) {
		this->pontuacaoTotal(int pontos);
		Score(atividade, pontos);
	}
	string getNome() {
		return nome;
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
	vector<Jogador> jogador;

	//Arquivo com pontuacao
	ifstream data("pontos.csv");
	while (getline(data, line)) {
		stringstream linestream(line);
		getline(linestream, nome, ',');//NOME
		getline(linestream, atividade, ',');//ATIVIDADE
		getline(linestream, pontos, ',');//SCORE

		auto score = stoi(pontos);//Conversao para int
		while(auto i: jogador){
			// se for ja existe jogador so acrescenta atividade e score
			if(nome.compare(Jogador->getNome)==0){
				Jogador(atividade, score);
			}
			else{
				Jogador(nome, atividade, score);
			}
		}
	}
	///LARGUEI DE MÃO
	///FAZER TUDO PRA TIRAR NOTA RUIM MESMO :)
}