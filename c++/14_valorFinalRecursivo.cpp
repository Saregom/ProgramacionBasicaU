#include <iostream>
using namespace std;

//declaracion de interes como global
float interes;

//funcon recursiva de tipo decimal
float capitalRecursivo(float interes, float interesFinal, float years) {
    //ecuacion para hallar los intereses
    interesFinal*=interes;
    years--;
    
    //Si el conador de años es igual a 1 reornal el valor del interes
    if (years == 1){
        return interesFinal;
    }else{
        //vuelve a utilizar la funcion "recursividad"
        return capitalRecursivo(interes, interesFinal, years);
    }
}

int main() {
    //definicion de variables
    float capital, years, interes_real, capital_final;
    //Peticion de datos
    cout << "Introduce la suma inicial\n";
    cin >> capital;
    cout << "Introduce el interes\n";
    cin >> interes;
    cout << "Introduce el numero de anos\n";
    cin >> years;

    //Se convierte el interes a decimayl y se suma 1
    interes_real = interes / 100 + 1;
    //llamada de la funcion
    capital_final = capital * capitalRecursivo(interes_real, interes_real, years );
    //impresion del valor que retorna la funcion 
    cout << "El capital final es: " << capital_final << endl;
}
