/*
Función; si la declaro como objeto podré almacenar en ella toda la función introducida por el usuario
Debe contener una función o método que guarde toda la función...para hacer eso probablemente recurra a algo como lo de Brau)
Así pues, yo creo que sus funciones deben consistir en leer y transformar las expresiones que el usuario ingrese para
su cálculo posterior, prácticamente lo mismo del proyecto en Python pero interpretado en C++
Todas sus funciones se llaman desde el main así que main debe pedir datos para ello
Aquí se viene lo bueno, quiero pensar que función puede heredar sus variables a Método
Método será la clase cuyas funciones se centren en calcular el resultado por Simpson de la integral
Básicamente, el usuario ingresa y se le pide escribir cualquier expresión. Antes de esto se construye un objeto Función
Se llama la función que transforma y captura toda la expresión...
Se preguntan los límites y el intervalo para llamar ahora a la función de la clase Método que calcula Simpson
Para esto último se construye un objeto Método
Finalmente planeo que la salida de la función dentro de Método regrese un resultado double específico, el resultado final
*/
#pragma once
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

class Funcion
{
private:
	string expresion;

public:
	Funcion()
	{}
	void Capturar(string expresion){
	//Próximamente toda la magia sucederá aquí
	}
	~Funcion() {}
};