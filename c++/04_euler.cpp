#include <iostream>
using namespace std;

int main() {
    int num, cont;//definicion de variables enteras
    double eu, divi, fact;//definicion de variables decimales
    
    cout << "Digita un numero para calcular la serie de euler" << endl;//dato ingresado por el usuario 
	cin >> num;
	
	fact = 1;//inicializamos variables en 1
	cont = 1;
	eu= 1;
	cout << endl << "n = 1: " << eu << endl;
	
	while (cont < num){//con un ciclo while hacemos un ciclo hasta el dato que ingreso el usuario
        fact *= cont;
		divi = 1 / fact;
		eu += divi;//estas operaciones lashacemos por la formula de euler, porque tomamos a euler como serie por eso empleamos el factorial

        cont++; //aumentamos el contador hasta que llegue a num y ahi se rompe el ciclo 
		cout << "n = " << cont << ": " << eu << endl;
    }//imprimimos el numero euler en la posicion que haya digita el usuario
	
    cout << endl << "El valor de euler en la posicion " << num << " es: " << eu << endl;
}