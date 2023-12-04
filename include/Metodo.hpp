#pragma once
#include <iostream>
#include <math.h>
#include <string>
#include <Funcion.hpp>
#include <Evaluador.hpp>

using namespace std;

class Metodo : protected Funcion
{
private:
	double h;

public:
	Metodo() {}
	double Calcular(double a, double b, double n, string expresion)
	{
		Evaluador expEva;
		int t = n + 1;
		double x[t], f[t], suma;
		h = (b - a) / n;
		for (int i = a; i <= t; i++)
		{
			x[i] = a + (h * i);
			f[i] = expEva.Evaluar(x[i], expresion);
		}
		int fa = a, fb = b;
		suma = f[fa] + f[fb];
		for (int i = 1; i < n; i++)
		{
			if (i % 2 == 0)
			{
				suma += 2 * (f[i]);
			}
			else
			{
				suma += 4 * (f[i]);
			}
		}
		double c;
		c = (h / 3) * suma;
		return c;
	};
	~Metodo() {}
};