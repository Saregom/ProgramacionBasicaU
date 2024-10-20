#include <iostream>
#include <cmath> 
using namespace std;

int main(){
	int base, varilla1, varilla2;
	float altura1, altura2, pendiente1, pendiente2, x, altura3;
	
	cout << "Ingrese el valor de la longitud de la base del pozo \n";
	cin >> base;
	cout << "Ingrese el valor de la distancia de la primer varilla \n";
	cin >> varilla1;
	cout << "Ingrese el valor de la distanca de la segunda varilla \n";
	cin >> varilla2;
	
	altura1 = sqrt(pow((varilla1), 2) - pow((base), 2));
	altura2 = sqrt(pow((varilla2), 2) - pow((base), 2));
	pendiente1 = altura1/base;
	pendiente2 = (-altura2/base);   // pendiente de la recta 
	
	x = altura2/(pendiente1-pendiente2); // h1/(m2-m1)
	
	altura3 = pendiente1 * x; // h3 = m2*x
	
	if(base > varilla1 || base > varilla2){
		cout << "\nLas variillas no es intersectan en ningun punto "<< endl;
	}else if (base == 0){
		cout << "\nLa longitud del pozo no puede ser igual a 0" << endl;
	}else{
		cout << "\nla altura entre el fondo del pozo a la interseccion de las dos varillas es de: " << altura3 << "m" << endl;
	}
}
