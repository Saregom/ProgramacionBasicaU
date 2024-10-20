#include <iostream>
using namespace std;

int main() {
    //Declaracion de variables
    int n, a, b, c;
    //Lectura del numero n
    cout << "Ingrese cuantos datos quiere saber de la serie de fibonacci" << endl;
    cin >> n;

    //se inicia la serie con 0 y 1 y se imprimen
    a=0;
    b=1;
    cout << endl << a << endl;
    cout << b << endl;

    //Ciclo para calcular la serie 
    for (int i=2;i<n;i++) {
        c=(a+b);
        a=b;
        b=c;	
        cout <<c<<endl; 
    }
    //Se imprime la informacion correspondiente de la serie
    cout << endl << "El numero " << n << " pertenece a al numero "<< c << " en la serie fibonacci" <<   
 endl;
    return 0;
}