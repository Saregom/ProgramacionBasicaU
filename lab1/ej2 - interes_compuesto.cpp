#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath> 
//#include <iomanip> // Libreria para - setprecision(1) << fixed
using namespace std;

main(){	
	float capital, interes, years, interes_real, capital_final;
	cout << "Introduce la suma inicial\n";
	cin >> capital;
	cout << "Introduce el interes\n";
	cin >> interes;
	cout << "Introduce el numero de anos\n";
	cin >> years;
	
	interes_real = interes/100;
	capital_final = capital * pow((1+interes_real), years);
	
	cout << "El capital final es: " << capital_final << endl;
	//cout << setprecision(2) << fixed << endl; 
	//cout << "El capital final es: " << capital_final << endl;
	system("PAUSE");
}
