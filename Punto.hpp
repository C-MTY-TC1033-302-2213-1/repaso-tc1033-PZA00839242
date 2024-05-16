#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Punto{
private:
double x;
double y;


public:
//Constructores
Punto();
Punto(double _x, double _y);

//Métodos modificadores - setters
void setX(double _x);
void setY(double _y);

//Métodos de acceso - getters
double getX();
double getY();

//Otros métodos
double calculaDistancia(Punto p2);
string str();

};

#endif /* Punto_hpp*/