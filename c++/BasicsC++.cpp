#include <bits/stdc++.h> //Incluye todas la librerias
using namespace std;

int main(){
	//-------------------getline para leer mas de un sring en una linea
	string nombreCompleto;
	getline(cin, nombreCompleto);
	cout << nombreCompleto << endl << endl;
	
	
	//--------------------Unir variables de distinto tipo dentro de un string
	//stringstream = modulo/variable donde se almacenara el string
	stringstream ss,  ss2;
	
	int year = 20, hijos = 3;
	
	ss << "concatenar el numero " << 3+5*3 << " en string";
	ss2 << "el pepe tiene " << year << " años y " << hijos << " hijos";
	
	string myStr1 = ss.str(),  myStr2 = ss2.str();
	
	cout << myStr1 << endl;
	cout << myStr2 << endl << endl;
	
	
	//-----Tambien sirve para convertir numeros a string
	//Limpiar stream ss
	ss.str("");
	
	ss << 212;
	string numToStr = ss.str();
	cout << "num to str: " << numToStr << endl << endl;	
	
	
	//-----------------------Convertir string a int / float
	string num = "234.6";
	
	int num2;
	float num3;
	
	stringstream(num) >> num2;
	stringstream(num) >> num3;
	
	cout << "str to int: " << num2 << endl;
	cout << "str to float: " << num3 << endl << endl;
	
	
	//----------------------metodos string
	string str1 = "bello y feo";
	
	cout << "str empty: " << str1.empty() << endl; // 0 = flse , 1 = true
	cout << "str find: " << str1.find("l") << endl; //Primera posicion que encuentre
	cout << "str substr: " << str1.substr(8, 10) << endl << endl; //subcadena en el posicion
	
	
	//-----------------------Divisiones enteras y decimales
	cout << "division ints: " << 5/2 << endl;
	cout << "division floats: " << 5.0/2.0 << endl << endl;
	
	
	//---------------------Recortar/Redondear decimales
	//Decimal normal
	cout << "decimal normal: " << 4.534835 << endl;
	cout << "floor: " << floor(4.534835) << endl; //redondea a entero mas bajo (4)
	
	//fixed << setprecision = para redondear a 3 decimales
	cout << fixed << setprecision(3); 
	
	double decimal = 3.32349238;
	
	//Deciales redondeados
	cout << "flosts redondeados a 3 decimales: " << endl;
	cout << decimal << endl;
	cout << 4.534835 << endl << endl;
}
