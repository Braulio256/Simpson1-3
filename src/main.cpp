#include <iostream>
#include <string.h>
#include <math.h>
#include <Metodo.hpp>
#include <Funcion.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    double a, b, n, c;
    string expresion;
    cout << "Bienvenido a la calculadora de integrales por m" << char(130) << "todo Simpson 1/3" << endl;
    Funcion funcion1;
    cout << "Introduzca la expresi" << char(162) << "n a integrar" << endl;
    cin >> expresion;
    funcion1.Capturar(expresion);//Función por terminar
    Metodo metodo1;
    cout << "Ingrese el l" << char(161) << "mite inferior de integraci" << char(162) << "n:" << endl;
    cin >> a;
    cout << "Ingrese el l" << char(161) << "mite superior de integraci" << char(162) << "n:" << endl;
    cin >> b;
    cout << "Ingrese el n" << char(163) << "mero de intervalos de integraci" << char(162) << "n" << endl;
    cin >> n;
    c = metodo1.Calcular(a, b, n);
    cout << "El resultado es: " << c << endl;
    return 0;
}