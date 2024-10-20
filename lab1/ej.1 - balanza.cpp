#include <iostream>
using namespace std;

int main(){
	float carga_izq, carga_der, longitud_izq, longitud_der, fuerza_izq, fuerza_der;
	
	cout << "Ingresa la carga aplicada al brazo izquierdo" << endl;
	cin >> carga_izq;
	cout << "Ingresa la longitud del brazo izquierdo" << endl;
	cin >> longitud_izq;
	cout << "Ingresa la carga aplicada al brazo derecho" << endl;
	cin >> carga_der;
	cout << "Ingresa la longitud del brazo derecho" << endl;
	cin >> longitud_der;
	
	fuerza_izq = carga_izq * longitud_izq;
	fuerza_der = carga_der * longitud_der;
	
	if(fuerza_izq == fuerza_der){
		cout << "La balanza esta en equilibrio";
	}else{
		if(fuerza_izq < fuerza_der){
			cout << "Se debe aplicar mas carga al brazo izquierdo";
		}else{
			cout << "Se debe aplicar mas carga al brazo derecho";
		}
	}
	//system("PAUSE");
	return 0;
}
