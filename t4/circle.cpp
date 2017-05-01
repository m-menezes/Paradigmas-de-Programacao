#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

class point {
private:
	double x;
	double y;
public:
	//Default
	point(){
		x = 0;
		y = 0;
	}
	//Default com Coordenadas
	point(double px, double py){
		x = px;
		y = py;
	}
	//Retorna valor do X
	double getX(){
		return x;
	}
	//Retorna valor do Y
	double getY(){
		return y;
	}
};

class Circle {
private:
	point pontoCentral;
	double r;
public:
	//Default sem dados
	Circle() {
		pontoCentral = point();
		r = 0.0;
	}
	//Default com dados
	Circle(double px, double py, double raio){
		pontoCentral = point(px, py);
		r = raio;
	}
	//Função membro area
	double area() {
		return PI * r * r;
	}
	//Recebe os dois circulos e calcula a distancia entre os mesmos
	double distanceTo(Circle *circulo1, Circle *circulo2){
        double result;
        result = (pow((circulo1->pontoCentral.getX() - circulo2->pontoCentral.getX()),2) + pow((circulo1->pontoCentral.getY() - circulo2->pontoCentral.getY()),2));
        result = sqrt(result);
        return result;
    }
	void showCircle(){
		cout << "X: " << pontoCentral.getX() << endl;
		cout << "Y: " << pontoCentral.getY() << endl;
		cout << "R: " << r << endl;
	}
};

int main() {

	Circle* circulo1 = new Circle(3.2, 1.5, 3);
	Circle* circulo2 = new Circle(4.2, 5.8, 2);

	//Mostra Circulo 1
	cout << "Circulo 1:" << endl;
	circulo1->showCircle();
    cout << endl;
	//Mostra Circulo 2
	cout << "Circulo 2:" << endl;
	circulo2->showCircle();
	//Mostra Distancia entre os mesmos
	cout << endl;
	cout << "Distancia entre o centro de C1 e C2:" << endl;
	cout << circulo1->distanceTo(circulo1, circulo2) << endl;
	delete circulo1;
	delete circulo2;
}

