
#include <iostream>
#include <cmath>

using namespace std;

class point{
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
        // funçao-membro  move
    void move(double dx, double dy){
        x += dx;
        y += dy;
    }
    double distanceTo(point p1, point p2){
        double result;
        result = (pow((p1.x - p2.x),2)+pow((p1.y - p2.y),2));
        result = sqrt(result);
        return result;
    }
    void showpoint(){
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
    }
};

int main(){
    double j = 1.12;
    int n = 5;

    //Criação Estatica
    point p = point(1 , 1);

    //Criação Dinamica
    point* pdin = new point[n];
    for(auto i = 0; i < n; i++){
        pdin[i] = point(j,j);
        j += 0.2;
    }
    //Calcula distancia entre dois pontos
    for(auto i = 0; i < n; i++){
        cout << p.distanceTo(p , pdin[i]) << endl;
    }
    //Destroi vetores point
    delete[] pdin;
}
