// ejercicio 4 lab 2
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //Declaracion variables
	int n;
	float aux, aux2, pivot, pivot2;

    //Lectura del tamaño de las matrices
	cout << "Ingrese la dimension de la dos matrices (cuadradas)" << endl;
	cin >> n;

    //Declaracion de matrices
	float A[n][n], B[n][n], I[n][n], I2[n][n];

    //Ingresa de los datos de la mariz A
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
		    cout << "Ingrese el dato A[" << i << "][" << j << "]:" << endl;
		    cin >> A[i][j];
	    	//para darle los valosres de la matriz identidad para hallar sus inversas
	        I[i][j] = 0;
	        //darle el valor 1 a las diagonales de la matriz A
	    	if(i==j){
				I[i][j]=1;
	    	}
		}
	}
	
	cout << endl;

    //Ingreso de los datos de la mariz B
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
		    cout << "Ingrese el dato B[" << i << "][" << j << "]:" << endl;
		    cin >> B[i][j];
			//para darle los valosres de la matriz identidad para hallar sus inversas
			I2[i][j]=0;
			//darle el valor 1 a las diagonales de la matriz B
			if(i==j){
				I2[i][j]=1;
			}
		}
	}
	
	//Suma de las matrices
	cout << endl << "A + B:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
		    cout << A[i][j] + B[i][j] << ", ";
		}
	cout << endl;
	}

    //Resta de las matrices
	cout << endl << "A - B:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
		    cout << A[i][j] - B[i][j] << ", ";
		}
	cout << endl;
	}

	//Multiplicacion de matrices
	cout << endl << "A * B:" << endl;
    //Iteracion de las filas de A
    for (int a=0; a<n; a++) {
        //Iteracion de las columas de B
        for (int i=0; i<n; i++) {
            int suma = 0;
            //Iteracion de las Columnas de A y Filas de B
            for (int j=0; j<n; j++) {
                suma += A[a][j] * B[j][i];
            }
            cout << suma << ", ";
        }
        cout << endl;
    }

    //Matrices inversas, reduccion por renglones
  	for(int i=0;i<n;i++){
    //la variable pivot es para convertir los numeros de las diagonales en 1
		pivot=A[i][i];
		pivot2=B[i][i];
		//convertimos el pivote 1 "diagonales"
		for(int k=0;k<n;k++){
			//operacion para colocar el numero de las diagonales en 1 la unica forma que se puede colocar un numero en 1 es con una division por si mismo por eso el pivot tiene el mismo valor de la posicion 
			A[i][k]/=pivot;
			I[i][k]/=pivot;
			B[i][k]/=pivot2;
			I2[i][k]/=pivot2;
			//como estmaos utilizando el metodo de gauss hay que hacer la operacion en toda a fila por eso incluimos la matriz I que al final va a hacer la inversa 
		}
		//para convertir lo que esta encima del pivote o debajo en 0
		for(int j=0;j<n;j++){
			if(i!=j){//para que no afecte la diagonal, por que solo debe ser 1.
			//aux es el numero de la matriz A que queremos convertir en 0 
				aux=A[j][i];
				aux2=B[j][i];
				for(int k=0;k<n;k++){
					//ecuacion para convertir el numero aux en 0 tambien sea hace en la matriz identidad porque la operacion que hagamos se tiene que aplicar en toda la fila de las dos matricez
				    A[j][k]-=aux*A[i][k];
				    I[j][k]-=aux*I[i][k];
					//lo mismo pero para la matriz B
				    B[j][k]-=aux2*B[i][k];
				    I2[j][k]-=aux2*I2[i][k];
				}
			}
		}
	}
	
	//Impresion de la matriz inversa de A
    cout << endl << "A^-1 es: "<<endl;
  	for( int i=0;i<n;i++){
		for(int  j=0;j<n;j++){
			cout<<I[i][j]<<",";
		}
		cout << endl;
	}
	
  	//impresion de la matriz inversa de B
    cout << endl << "B^-1 es: " << endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<I2[i][j]<<",";
		}
		cout << endl;
	}
	
	return 0;
}
