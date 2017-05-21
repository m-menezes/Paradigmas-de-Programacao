#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <ctime>

using namespace std;

class Forma {
public:
	virtual double custo() const = 0;
	virtual double getArea() const = 0;
};



class quadrado: public Forma{
private:
	double base, altura, area;
public:
	quadrado(double b, double a){
		this->base 		= b;
		this->altura 	= a;
		this->area 		= base * altura;
	}
	virtual double getArea() const{
		return this->area;
	}
	virtual double custo() const {
		if(area > 7){
			return 5.00;
		}
		if(area <= 7 && area >= 4){
			return 2.50;
		}
		if(area < 4){
			return 1.25;
		}
	}
};

class circulo: public Forma{
private:
	const double pi = 3.14;
	double raio, area;
public:
	circulo(double r){
		this->raio 		= r;
		this->area 		= pi * (raio * raio);
	}
	double getArea() const{
		return this->area;
	}
	virtual double custo() const {
		if(area > 7){
			return 5.00;
		}
		if(area <= 7 && area >= 4){
			return 2.50;
		}
		if(area < 4){
			return 1.25;
		}
	}
};

class triangulo: public Forma{
private:
	double base, altura, area;
public:
	triangulo(double b, double a){
		this->base 		= b;
		this->altura 	= a;
		this->area 		= (base * altura) / 2;
	}
	double getArea() const{
		return this->area;
	}	
	virtual double custo() const {
		if(area > 7){
			return 5.00;
		}
		if(area <= 7 && area >= 4){
			return 2.50;
		}
		if(area < 4){
			return 1.25;
		}
	}
};

bool ordena (const Forma* f1,const Forma* f2) {
	return f1->getArea() < f2->getArea();
}
//custoes randomicos
double randNumber(int vmax){
	return ((double) rand() / (RAND_MAX)) + rand() % vmax;
}


int main(){
	//Seed Random
	srand(time(NULL));
	
	double area = 0.0;
	double custo = 0.0;
	double custoP, custoM, custoG = 0.0;
	int p,m,g;
	vector<Forma*> figura;
	p = m = g = 0;
	int biscoitos;

	//Input biscoitos
	cout << "Número de biscoitos desejada" << endl;
	cin >> biscoitos;

	for(auto i = 0; i < biscoitos; i++){
		double r 		= randNumber(2);
		double pointX 	= randNumber(5);
		double pointY 	= randNumber(5);
		switch((int)randNumber(3)){
			case 0://Triangulo
			figura.push_back(new triangulo(pointX, pointY));
			break;
			case 1://Circulo
			figura.push_back(new circulo(r));
			break;
			default://quadrado
			figura.push_back(new quadrado(pointX, pointY));
			break;
		}
	}
	//Ordanação
	sort(figura.begin(), figura.end(), ordena);
	cout << "Tamanho || Custo " << endl;
	for (int i = 0; i < figura.size(); i++){
		custo = figura[i]->custo();
		area = figura[i]->getArea();
		if(area > 7){
			g++;
			custoG += custo;
		}
		if(area <= 7 && area >= 4){
			m++;
			custoM += custo;
		}
		if(area < 4){
			p++;
			custoP += custo;
		}
		cout.precision(4);
		if(area > 9.99){
			cout << fixed << area << " || ";
			cout.precision(2);
			cout << custo << endl;
		}
		else{
			cout << " "<< fixed << area << " || ";
			cout.precision(2);
			cout << custo << endl;
		}
		//cout << fixed << "Tamanho: " << area << " Custo:" << custo << endl;
	}
	cout << endl << "Foram gerados:" << figura.size() << " Biscoitos"	 << endl;
	cout << " P - "<< p << " - Custo total: " << custoP << endl;
	cout << " M - "<< m << " - Custo total: " << custoM << endl;
	cout << " G - "<< g << " - Custo total: " << custoG << endl;
	return 0;
}
