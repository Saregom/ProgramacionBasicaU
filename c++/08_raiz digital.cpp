#include <iostream>
#include <sstream>
using namespace std;

main(){	
	//Definicion de variables
	int numero, suma, num;
	string str;
	
	//Se lee numero 
	do{
		//Condicional para evitar numero negativos
		if(numero<0){
			cout << "El numero no puede ser negativo" << endl;
		}
		cout << "ingresa el numero para calcular la raiz digital" << endl;
		cin >> numero;
	}while(numero<0);
	
	//Condicional si numero es menor a 10, la raiz digital va a ser el mismo numero
	if(numero < 10){
		cout << "La raiz digital es: " << numero << endl;
	//Si es meyor o igual a 10...
	}else{
		//Mientras numero mayor o igual a 10
		while(numero >= 10){
			//Convertimos numero a string con stringstream
			stringstream ss; //inicializamos objeto
			ss << numero; //Guardamos/convertimos numero en 'Stream'
			str = ss.str(); //Asignamos el 'Stream' como string a la variable 'str'
			
			//inicializamos variable suma en 0
			suma = 0;
			
			//ciclo para realizar la suma de los digitos obteniendo su posicion en string
			for(int i=0;i<str.length();i++){
				num = str[i] - 48; // covertimos el char (string[i]) a int y le restemos 48 (codigo ASCII)
				suma += num;
			}
			numero = suma;
			//Limpiamos obtejo stringstream para volver a hacer el ciclo
			ss.str("");
		}
		//Impresion de raiz digital
		cout << "La raiz digital es: " << numero << endl;
	}
}
