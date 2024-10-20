#include <iostream>
using namespace std;


double fact = 1, divi, eu2; 
int cont = 1, num;

double eulerRecursivo(double eu){
    
    fact *= cont;
    divi = 1 / fact;
    eu += divi; // estas operaciones lashacemos por la formula de euler, porque
                // tomamos a euler como serie por eso empleamos el factorial

    cont++; // aumentamos el contador hasta que llegue a num y ahi se rompe el ciclo+
    cout << "n = " << cont << ": " << eu << endl;
    //si el contador es igual a 0 nos va a retornador el valor 1
    if(cont == num){
       
        return eu;
    }
    //recursividad llamada de la funcion
    eu2 = eulerRecursivo(eu); 
    //cout << "eu ret 2 " << eu2 << endl;
    return eu2;
}   
int main(){
    double eu=1.0;
    // dato ingresado por el usuario
    cout << "Digita un numero para calcular la serie de euler" << endl; 
    cin >> num;

    cout << "n = 1: " << eu << endl;

    eu = eulerRecursivo(eu);  
    //Imprimimos el numero euler en la posicion que haya digita el usuario
    cout << endl;

    cout << "El valor de euler en la posicion " << num << " es: " << eu << endl;
    }
