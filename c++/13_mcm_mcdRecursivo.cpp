#include <iostream>
using namespace std;

int n1, n2, n3, n_min, n_max, mcd, mcm = 0, posible_mcm;

int mcdRecursivo(int i){
    //Si los tres numeros son divisbles entre el mismo numero (i), ese sera mcd
    if (n1 % i == 0 & n2 % i == 0 & n3 % i == 0) {
        mcd = i;
    }
    
    i++;
    //Si i es mayor al numero minimo retornara el mcd, si no, se hace la recursividad
    if(i>n_min){
        return mcd;
    }else{
        return mcdRecursivo(i);
    }
}

int mcmRecursivo(int i){
    //Posible mcm sera la tabla de multiplicar del numero mayor
    posible_mcm = n_max * i;
    //Si algun numero de la tabla del numero mayor es "modulo 0" de los tres numeros, ese sera el mcm
    if(posible_mcm % n1 == 0 && posible_mcm % n2 == 0 && posible_mcm % n3 == 0){
        mcm = posible_mcm;
        return mcm; 
    }  

    //Si mcm es igual a 0 se realiza la recursividad
    if(mcm == 0){
        return mcmRecursivo(i+1);
    }
}  

int main(){
    //Lectura de los 3 numeros
	cout << "Digita tres numeros para calcular el M.C.M y el M.C.D" << endl;
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

    //Se imprime el mcd y el mcm
    cout << "El maximo común divisor es: " << mcdRecursivo(1) << endl; 	
    cout  << "El minimo comun multiplo es: " << mcmRecursivo(1) << endl; 	
}
