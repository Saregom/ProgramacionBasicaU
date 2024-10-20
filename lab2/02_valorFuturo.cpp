#include <iostream>
#include <cmath> 
using namespace std;

//C=capital, I=Interes(%), n=(años), P=N° Periodos en un año, 
long calculo_VF(long C, float I, int n, int P){

	//Declaracion de variables
    float i, VF;
    int N;

    //Interes efectivo por cada periodo 
    i = (I/100)/P; 
    //Numero de periodos por año
    N = n*P;
    //Calculo de valor Futuro
    VF = C * pow((1+i), N);

    //Impresion de resultados
    cout << "\nC = " << C << " $" << endl;
    cout << "I = " << I << " %" << endl;
    cout << "n = " << n << " anio/s" << endl;
    cout << "i = " << i << " de interes" << endl;
    cout << "N = " << N << " periodos" << endl;
    //Se retorna valor futuro 
    return VF;
}

int main(){	
    //Definicion de variables
    int years, opcion_periodos, num_periodos;
	long capital, capital_final;
    float interes;

    //Lectura de datos
    cout << "Introduce el capital inicial \n";
	cin >> capital; //C
	cout << "Introduce el interes\n";
	cin >> interes; //I(%)
	cout << "Introduce el numero de anios\n";
	cin >> years;// n
    
	// opciones de tipos de periodos 
    cout << "\nIngrese la opcion del sistema de capitalizacion que desee (1, 2, 3, 4)" << endl;
    cout << "1. Mensual" << endl;
    cout << "2. Trimestral" << endl;
    cout << "3. Semestral" << endl;
    cout << "4. Anual" << endl;
    cin >> opcion_periodos;
    
    //switch para elegir el numero de periodos
    switch(opcion_periodos){
        case 1: num_periodos = 12 ;break; 
        case 2: num_periodos = 4 ; break;  
        case 3: num_periodos = 2 ; break;
        case 4: num_periodos = 1 ; break;
    }
    //llamada de la funcion 
    capital_final = calculo_VF(capital, interes, years, num_periodos);
    //Impresion de lo que retorna la función 
    cout << "\nEl valor futuro es (VF): " << capital_final << endl;
}
