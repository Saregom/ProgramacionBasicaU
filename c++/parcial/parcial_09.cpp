#include <iostream>
#include <cmath>
using namespace std;

int main(){
	//Se declaran las variables
	long long int x=2, y=4, z=0;
	
	//Se realiza el prcedimiento
	x=pow(x, y);
	y=pow(y, x);
	x=pow(x, y);
	
	//Se imprimen los valores para verificar si no se cambiaron
	cout << "x =" << x << endl; 
	cout << "y =" << y << endl; 
}

