#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int casilla[3];

/*int *casillaComplemento(int array[]){
	
}

int *casillaFunc2(string modulo){
	
	//int a, b, index;
	int numCasilla;
	int condition = false;
	
	while(condition == false){
		numCasilla = 1 + rand() % 9;
		if(numCasilla % 2 == 0){
			if(modulo == "impar"){
				condition = true;
			}
			
		}else if(modulo == "par" && numCasilla != 5){
			condition = true;
		}
	}
	return casilla(numCasilla);
	
}*/

int *casillaFunc(int numCasilla){
	int a, b, index;
	
	switch(numCasilla){
		//Numeros pares
		case 1: a = 0, b = 0, index = 1; break;
		case 3: a = 0, b = 2, index = 3; break;
		case 7: a = 2, b = 0, index = 7; break;
		case 9: a = 2, b = 2, index = 9; break;
		//Numeros impares
		case 2: a = 0, b = 1, index = 2; break;
		case 4: a = 1, b = 0, index = 4; break;
		case 6: a = 1, b = 2, index = 6; break;
		case 8: a = 2, b = 1, index = 8; break;
	}
	
	casilla[0] = a;
	casilla[1] = b;
	casilla[2] = index;
	
	return casilla;
}

int main() {
	srand(time(NULL));
	
	int n, a, b;
	string modulo;
	int magic[3][3];
	
	//Quitar
	for(int i=0;i<3;i++){
		for(int h=0;h<3;h++){
			if(i == 1 && h == 1){
				magic[i][h] = 5;
				continue;
			}
			magic[i][h] = 0;
		}
	}
	
	
	//-----------------Peticion de 'n'
	do{
		n = 1 + rand() % 9;	
	}while(n == 5);
	
	cout << "n: " << n << endl;
	
	//-----------------Defnicion si 'n' es par e impar
	if(n % 2 == 0){
		modulo = "par";
	}else{
		modulo = "impar";
	}
	
	int numCasilla;
	int condition = false;
	
	while(condition == false){
		numCasilla = 1 + rand() % 9;
		if(numCasilla % 2 == 0){
			if(modulo == "impar"){
				condition = true;
			}
			
		}else if(modulo == "par" && numCasilla != 5){
			condition = true;
		}
	}
	
	//-------------------Ubicacion n
	int *casilla1 = casillaFunc(numCasilla);
	
	magic[casilla1[0]][casilla1[1]] = n;
	
	//cout << "casilla: " << endl;
	//cout << casilla[0] << ", " << casilla[1] << endl;
	
	
	//---------------------Ubicacion complemento de n
	int casillaCompl = 10 - casilla1[2];
	
	int *casilla2 = casillaFunc(casillaCompl);
	
	int numCompl = 15 - (n + 5);
	
	magic[casilla2[0]][casilla2[1]] = numCompl;
	
	//--------------------hallar numeros sumados con 'n' que den 15
	int suma, numSuma1, numSuma2;
	for(int i=1;i<10;i++){
		if(i == 5 || i == n){
			continue;
		}
		for(int h=1;h<10;h++){
			if(h == 5 || h == n){
				continue;
			}
			suma = n + i + h;
			if(suma == 15){
				numSuma1 = i;
				numSuma2 = h;
				cout << "sumas: " << numSuma1 << ", " << numSuma2 << endl;
				break;
			}
		}
	}
	cout << "sumas: " << numSuma1 << ", " << numSuma2 << endl;
	
	
	
	cout << endl << "Cubo magico: \n\n";
	cout << "-------------" << endl;
	for(int i=0;i<3;i++){
		
		cout << "| ";
		for(int h=0;h<3;h++){
			cout << magic[i][h] << " | ";
		}
		cout << endl << "-------------" << endl;
	}
}
