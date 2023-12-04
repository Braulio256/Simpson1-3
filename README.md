# Simpson1-3
Proyecto de Programación Avanzada

Método Numérico Simpson 1/3 para integrales

Braulio Alberto Ortíz Reyes 22310270

Carlos Alejandro Mercado Villalvazo 22310273

IMPORTANTE: se necesita mingw64 instalado para compilar el programa. Contiene una librería externa desarrollada por Codeplea. Véase el manual de uso al final de este archivo antes de ejecutar el programa

## Documentación

Diagrama principal

![image](https://github.com/Braulio256/Simpson1-3/assets/143459593/01262be4-fc1c-4ac4-b026-d303048455e8)

Captura de funcionamiento del programa

![image](https://github.com/Braulio256/Simpson1-3/assets/143459593/702cffa8-c6e4-4d06-aafc-520a7243891a)

Código anterior, escrito en Python

![image](https://github.com/Braulio256/Simpson1-3/assets/143459593/7be1e5d2-b180-4c6e-a71d-c15bf7491390)

![image](https://github.com/Braulio256/Simpson1-3/assets/143459593/cd935b5b-6979-48b8-b539-b6fc2e5f4921)

## Manual de uso

01-Introducción<br />
02-Uso<br />
03-Compilar<br />

### 01-Introducción

Este programa fue desarrollado para la materia de Programación Avanzada de tercer semestre en CETI. En resumen captura, interpreta y resuelve integrales usando el método numérico Simpson 1/3 en C++, previa entrada de los datos necesarios para dicho método.

### 02-Uso

Para usar el programa, descargue o copie todos los archivos a una carpeta y ejecute Simpson.exe (dentro del directorio bin)<br />
IMPORTANTE: El ejecutable fue diseñado para Windows y no se garantiza su funcionamiento en otras plataformas<br />
Siga las instrucciones, se le pedirá ingresar una expresión matemática, los dos límites de integración y el intervalo de integración<br />
IMPORTANTE: Preste atención al mensaje "La expresión interpretada es:" que detalla la función matemática "comprendida" por el programa. Si no es lo que esperaba se recomienda reiniciar el proceso y pensar una vez más la sintaxis de la función. El programa crea algunas multiplicaciones automáticamente y no se considera un error de interpretación sino más bien la función principal de la captura de ecuaciones<br />
Por defecto, se reconocen la gran mayoría de operadores que se ven en el lenguaje C (sin,cos,exp,sqrt,etc) y se puede optar por escribir "raiz" para raíces cuadradas por comodidad del usuario<br />

### 03-Compilar

Si desea compilar de nuevo el programa, se requiere de mingw64 instalado. Verifique la versión de gcc y g++ del sistema, así como que el binario de cada uno se encuentre inluído en el Path de las variables de entorno. Si después de esto no se reconoce el compilador, es buena idea editar el archivo Settings.json, donde se introduce el directorio predeterminado para el compilador. Para mayor comodidad, haga esto sólo usando el Makefile incluído en el paquete
