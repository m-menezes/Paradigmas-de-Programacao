#include <iostream>
using namespace std;

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