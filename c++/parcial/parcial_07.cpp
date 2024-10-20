#include <iostream>
//Se define on = 1 y off = 0
#define on 1
#define off 0
using namespace std;

int  main (){
	//Declaracion de a = on
	int a = on;

	//Verifica si es igual a off, si es verdadero, a = on, si no, a = off
	a = a==off ? on : off ;
	
	//Se imorime el valor de a
	cout << "a: " << a << endl;
 
}
