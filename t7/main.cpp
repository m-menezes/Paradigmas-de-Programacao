#include <iostream>     // cout
#include <algorithm>    // random_shuffle
#include <vector>       // vector
#include <ctime>        // time
#include <FL/fl_ask.H>  // fl_alert

#include "window.h"

using namespace std;
vector<int> array;

class randomPeople : public UserInterface {
private:
	int flag = 0;
public:
	randomPeople() {
		//Desativar Reset se nao foi sorteado
		reset->deactivate();
		//Setar numero inicial de vencedores
		nGanhador->copy_label(to_string(0).c_str());
		//Clicar nos botões sortear ou resetar, inicia as funções
		sortear->callback((Fl_Callback*) randomNumber, (void*)(this));
		reset->callback((Fl_Callback*) resetNumber, (void*)(this));
	}
	void show() {
    // Mostra janela
		w->show();
	}
	static void resetNumber(Fl_Widget*, void* userdata) {
		//cast de void* userdata para gui randomPeople
		randomPeople* gui = static_cast<randomPeople*>(userdata);
		//reseta botões e zerar valores
		gui->reset->deactivate();
		gui->sortear->activate();
		gui->participantes->activate();
		gui->participantes->value("");
		gui->resultado->label("");
		gui->nGanhador->copy_label(to_string(0).c_str());
		gui->flag = 0;
		array.clear();
	}

  // Funcao chamada quando pressionado botao sortear
	static void randomNumber(Fl_Widget*, void* userdata) {
		randomPeople* gui = static_cast<randomPeople*>(userdata);
		try {
			if(gui->flag == 0){
			//desativar modificação de valor numero de participantes ate clicar em reset
			gui->participantes->deactivate();
			gui->reset->activate();
			//receber valor numero de participantes
			int max = stoi(gui->participantes->value());
			//Criação vector;
			for (int i=1; i<max+1; ++i){
				array.push_back(i);
			}
			//gerar ordem aleatoria
			random_shuffle(array.begin(), array.end());
			//mostra o primeiro valor da lista
			gui->resultado->copy_label(to_string(array[gui->flag]).c_str());
			gui->nGanhador->copy_label(to_string(gui->flag+1).c_str());
			gui->flag++;
		}
		else{
			//mostra proximos resultados
			gui->resultado->copy_label(to_string(array[gui->flag]).c_str());
			gui->nGanhador->copy_label(to_string(gui->flag+1).c_str());
			gui->flag++;
		}
		// bloqueia sortear se chegar ao final de participantes
		if(gui->flag == stoi(gui->participantes->value())){
			gui->sortear->deactivate();
		}
	}// se nao possui valor no input e clicado no sortear
	catch (std::invalid_argument&) {
		fl_alert("Informe o número de participantes.");
	}
}
};

int main() {
	//Seed Random
	srand(unsigned(time(0)));
	randomPeople gui;
	gui.show();
	return Fl::run();
}
