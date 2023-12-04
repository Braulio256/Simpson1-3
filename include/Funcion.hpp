#pragma once
#include <iostream>
#include <string.h>
#include <math.h>
#include <Interpretador.hpp>

using namespace std;

class Funcion
{
private:
protected:
	string expresion;

public:
	Funcion()
	{}
	string Capturar(string expresion){
	string exp;
	Interpretador expInt;
	exp=expInt.Interpretar(expresion);
	return exp;
	};
	~Funcion() {}
};