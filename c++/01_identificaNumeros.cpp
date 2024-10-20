#include <iostream>
using namespace std;

int main(){
	int n, num, contPos, contNeg, contCero;
	n=0, num=0, contPos=0, contNeg=0, contCero=0;
    
    cout << "Ingresa la cantidad de numeros a evaluar" << endl ;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "Ingresa el numero a evaluar" << endl ;
		cin >> num;
		
		if(num > 0){
			cout << "Es positivo" << endl <<endl;
			contPos++;
		}else if(num < 0){
			cout << "Es negativo" << endl <<endl;
			contNeg++;
		}else if(num == 0){
			cout << "Es cero" << endl <<endl;
			contCero++;
		}
	}
	
	cout << "Se evaluaron "<< n << " numeros" << endl;
	cout << "Hay "<< contPos << " numeros positivos" << endl;
	cout << "Hay "<< contNeg << " numeros negativos" << endl;
	cout << "Hay "<< contCero << " ceros" << endl;
	
	
	/*while(i < n){
		cout << "Ingresa el numero a evaluar" << endl;
		cin >> num;
		
		if(num > 0){
			cout << "Es positivo" << endl;
		}else if(num < 0){
			cout << "Es negativo" << endl;
		}else if(num == 0){
			cout << "Es cero" << endl;
		}
		
	}*/


}
