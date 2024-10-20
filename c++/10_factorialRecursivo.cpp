#include <iostream>
using namespace std;

int factorialRecursivo(int n){
	if(n == 0){ 
		return 1;
	}else{
		return n * factorialRecursivo(n-1);
	}
}

int main(){
	int n;
	cout << "Ingrese ek valor para calcular el factorial" << endl;
	cin >> n;
	
	int factorial = factorialRecursivo(n);
	
	cout << "El factorial es: " << factorial;
}
