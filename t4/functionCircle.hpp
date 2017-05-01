#include <iostream>
#include <cmath>


using namespace std;

const double PI = 3.14159;

class Circle {
public:
	point pontoCentral;
	double r;

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
	double getRaio(){
        return r;
	}
};
