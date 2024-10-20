#include <iostream>
using namespace std;

//Funcion que ordena el array de menor a mayor
int * ordenarArray(int array[], int opc){
	//Declaracon de variable
	int guarda;
	
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			//Si un numero es mayor al siguiente, entonces se intercambian
			if(array[i] > array[j] && opc == 1){
				guarda = array[i];
				array[i] = array[j];
				array[j] = guarda;
			//Si un numero es menor al siguiente, entonces se intercambian
			}else if(array[i] < array[j] && opc == 2){
				guarda = array[i];
				array[i] = array[j];
				array[j] = guarda;
			}
		}
	}
	return array;
}

int main(){
	//Declaracon del array
	int numbers[10];
	
	//Ingreso de numeros en el array
	for(int i=0;i<10;i++){	
		cout << "Ingresa el numero en al posicion #" << i << endl;
		cin >> numbers[i];
	}
	
	//Se muestra la dimension del array
	cout << endl << "La dimension del array es: 10" << endl;
	
	//Se muestra el array  original
	cout << endl << "El array original es: " << endl;
	for(int i=0;i<10;i++){	
		cout << numbers[i] << ", ";
	}

	//Se imprime el array ordenado
	cout << "\n\nEl array ordenado de menor a mayor es: " << endl;
	for(int i=0;i<10;i++){	
		cout << ordenarArray(numbers, 1)[i] << ", ";
	}
	
	//Se imprime el array ordenado
	cout << "\n\nEl array ordenado de mayor a menor es: " << endl;
	for(int i=0;i<10;i++){	
		cout << ordenarArray(numbers, 2)[i] << ", ";
	}
	
	return 0;
}
