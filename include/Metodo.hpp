/*Básicamente, el método de Simpson consiste en obtener h a partir de los datos introducidos por el usuario
h=(b-a)/n
h demuestra de cuánto en cuánto avanza a para llegar a b
esto último es, si a=0, b=2, n=4 entonces (2-0)/4=1/2 o 0.5; then x0=0, x1=0.5, x2=1, x3=1.5, x4=2;
Ahora, dependiendo de cuántas x obtuve durante este paso, debo hacer una sumatoria como se muestra a continuación:
y0+(4*y1)+(2*y2)+(4*y3)+y4
los extremos nunca son productos y la parte central se multiplica por 4 si es impar la x o por 2 si la x es par
así, puedo extender la expresión por ejemplo para el caso n=6:
y0+(4*y1)+(2*y2)+(4*y3)+(2*y4)+(4*y5)+y6
significa que la función se evalúa varias veces en el valor correspondiente de x (para y0->x0=0) y se obtiene el producto
La sumatoria total se debe multiplicar por h/3, que viene dado al principio de la fórmula
Obtengo el resultado :thumbs_up:
*/
#pragma once
#include <iostream>
#include <math.h>
#include <Funcion.hpp>

using namespace std;

class Metodo:protected Funcion
{
private:
	double h, fa, x1, fx1, fb, w;

public:
	Metodo() {}
	double Calcular(double a, double b, double n)
	{
		h = (b - a) / n;
		x1 = a + h;
		fa = exp(-1 * pow(a, 2));
		fb = exp(-1 * pow(a, 2));
		fx1 = exp(-1 * pow(x1, 2));
		w = (h / 3) * (fa + (4 * fx1) + fb);
		return w;
	}
	~Metodo() {}
};