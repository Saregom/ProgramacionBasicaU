#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	//Metodo para que se cambien los valores aleatorios cada vez que se ejecuta el programa
	srand(time(NULL));
	
	//Declaracion de variables (n = numero aleatorio inicial)
	int n, numSuma1, numSuma2;
	string modulo;
	//Declaracion de la matriz para el cuadrado magico
	int magic[3][3];
	
	//Declaracion de 'n' como un numero aleatorio sin contar el 5
	do{
		n = 1 + rand() % 9;	
	}while(n == 5);
	
	//Se declara repeticiones como un numero aleatorio
	int repeticiones = 1 + rand() % 2;
	
	//Ciclo para hallar la suma de la primera fila
	for(int i=1;i<10;i++){
		for(int h=1;h<10;h++){
			//Condiciones para evitar las sumas que no son necesarias
			if(h == 5 || i == 5 || i == h || i == n || h == n){
				continue;
			}
			//Se evalua si la suma de los 3 numeros es igual a 15
			if(i + h + n == 15){
				if(h % 2 != 0){
					numSuma1 = h;
					numSuma2 = i;
				}else{
					numSuma1 = i;
					numSuma2 = h;
				}
				repeticiones--;
			}
			if(repeticiones == 0){
				break;
			}
		}
		if(repeticiones == 0){
			break;
		}
	}
	
	//-------------------UBICACION DE VALORES-----------------
	
	//Se inserta el numero 5 en el centro (SEGUNDA FILA, SEGUNDA COLUMNA)
	magic[1][1] = 5;
	
	//Se insertan los valores obtenidos, en la PRIMERA FILA
	if(n % 2 == 0){
		magic[0][0] = n;
		magic[0][1] = numSuma1;
	}else{
		magic[0][0] = numSuma1;
		magic[0][1] = n;
	}
	magic[0][2] = numSuma2;
	
	//Se inserta la TERCERA FILA calculando el numero complementario teniendo en cuenta el 5 y la primera fila
	magic[2][0] = 10 - magic[0][2];
	magic[2][1] = 10 - magic[0][1];
	magic[2][2] = 10 - magic[0][0];
	
	//Se inserta la SEGUNDA FILA restandole a 15 los valores de su misma columna (15 - fila 1 - fila 3)
	magic[1][0] = 15 - magic[0][0] - magic[2][0];
	magic[1][2] = 15 - magic[0][2] - magic[2][2];
	
	//-------------------------Se imprime el cuadrado magico-----------------
	cout << "Cuadrado magico: \n\n";
	cout << "-------------" << endl;
	for(int i=0;i<3;i++){
		cout << "| ";
		for(int h=0;h<3;h++){
			cout << magic[i][h] << " | ";
		}
		cout << endl << "-------------" << endl;
	}
}
