#include <iostream>
#include <string>
#include <math.h>
#include <Metodo.hpp>
#include <Funcion.hpp>
#include <Interpretador.hpp>
#include "tinyexpr.h"

using namespace std;

int main(int argc, char const *argv[])
{
    double a, b, n, c;
    string expresion;
    cout << "Bienvenido a la calculadora de integrales por m" << char(130) << "todo Simpson 1/3" << endl;
    Funcion funcion1;
    cout << "Introduzca la expresi" << char(162) << "n a integrar" << endl;
    cin >> expresion;
    expresion = funcion1.Capturar(expresion);
    Metodo metodoSimpson;
    cout << "Ingrese el l" << char(161) << "mite inferior de integraci" << char(162) << "n:" << endl;
    cin >> a;
    cout << "Ingrese el l" << char(161) << "mite superior de integraci" << char(162) << "n:" << endl;
    cin >> b;
    cout << "Ingrese el n" << char(163) << "mero de intervalos de integraci" << char(162) << "n" << endl;
    cin >> n;
    c = metodoSimpson.Calcular(a, b, n, expresion);
    cout << "El resultado es: " << c << endl;
    fflush(stdin);
    getchar();
    return 0;
};