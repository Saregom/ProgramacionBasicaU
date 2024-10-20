#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int altura, radio;
	double pi = M_PI, volumen, area_lateral;

	cout<< "Por favor introduzca el valor de la altura del cilindro\n";
	cin >> altura;
	cout << "Por favor introduzca el valor del radio del cilindro\n";
    cin >> radio;
    
	volumen= (pi * altura * pow((radio), 2));
	area_lateral= (2 * pi * altura * radio);

	cout << setprecision(3) << fixed << endl; 
	
	cout << "El area lateral del cilindro es: " << area_lateral << " m^3" << endl;
	cout << "El volumen es: " << volumen << " m^2" << endl;
	
}
