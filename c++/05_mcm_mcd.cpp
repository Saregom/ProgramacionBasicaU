#include <iostream>
#include <math.h>
using namespace std;

int main(){
    //Definicion de variables
	int n1, n2, n3, n_min, n_max, mcm, posible_mcm, mcd, i;

    //Lectura de los 3 numeros
	cout << "Digita tres numeros para calcular el M.C.M y el M.C.D"<<endl;
	cin >> n1;
    cin >> n2;
    cin >> n3;

    //Condicional para encontrar el numero mayor
	if( n1>n2 & n1>n3) {
        n_max = n1;
    }else if(n2>n1 & n2>n3){
        n_max = n2;  
    }else{
        n_max= n3;
    } 

    //Condicional para encontrar el numero menor
    if( n1<n2 & n1<n3) {
        n_min = n1;
    }else if(n2<n1 & n2<n3){
        n_min = n2;  
    }else{
        n_min = n3;
    } 

    //Se inicializa mcd y el contador en 1
    mcd = 1;
	i = 1;

    //Ciclo while para encontrar el mcd
	while (i <= n_min) {
        //Si los tres numeros son divisbles entre el mismo numero (i), ese sera mcd
        if (n1 % i == 0 && n2 % i == 0 && n3 % i == 0) {
          mcd = i;	
        }
		i++;
    }
    //Se imprime el valor de mcd
	cout << "El maximo común divisor es: " << mcd << endl; 

    //Se inicializa mcm en 0 y el contador en 1
	mcm = 0;
	i = 1;

    //Ciclo while para encontrar el mcm
	while(mcm == 0){
        //Posible mcm sera la tabla de multiplicar del numero mayor
        posible_mcm = n_max * i;
		i++;
        //Si algun numero de la tabla del numero mayor es "modulo 0" de los tres numeros, ese sera el mcm
        if(posible_mcm % n1 == 0 && posible_mcm % n2 == 0 && posible_mcm % n3 == 0){
           mcm = posible_mcm; 
        }                                     
    }
    //Se impime el valor de mcm
	cout  << "El minimo comun multiplo es: " << mcm << endl;
}
