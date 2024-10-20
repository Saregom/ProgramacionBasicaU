#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Definicion de variables dadas por el usuario
    int a, b, c; 
    float x, x1, x2, discri, discri_neg, rc_discri;
    
    //Lectura de los oeficientes de la ecuacion
    cout << "Digite 3 numeros para calcular la ecuacion cuadratica:" << endl;
    cout << "Digita el coeficiente para x^2 (a)" << endl;
    cin >> a;
    cout << "Digita el coeficiente para x (b)" << endl;
    cin >> b;
    cout << "Digita el coeficiente independiente (c)" << endl;
    cin >> c; 
    
    //Se imprime la ecuacion dada por el usuario
    cout << "La ecucion es: (" << a << ")x^2 + (" << b << ")x + (" << c << ") \n\n";

    //Si a es negativo, se multiplican todos los coeficientes por -1
    if(a<0){
        a = -a;
        b = -b;
        c = -c;
    }
    //Asignacion del discriminante
    discri = pow(b, 2) - (4 * a * c); 

    //Si el disciminate es negativo, se convierte a positivo
    if (discri < 0) {
        discri_neg = -discri;
        rc_discri = sqrt(discri_neg); 
    }

    // Si el coeficiente 'a' es igual 0, no es una ecuacion cuadratica
    if(a == 0){ 
        cout << "No es una funcion cuadratica (x^2) = 0" << endl;
    // Si 'a' no es igual 0
    }else{
        //Si el discrimianante es igual a 0, solo habra una raiz solucion
        if(discri == 0){
            x = -b / 2 * a;
            cout << "x = " << x << endl; 
        //Si el discrimante no es igual a 0
        }else{                  
            //Si el discriminante es negativo, el resultado sera imaginario
            if(discri < 0){
                //Si el discriminante no tiene raiz exacta
                if (rc_discri - trunc(rc_discri) > 0) { 
                    cout << "x1 = (" << -b << " + raiz(" << discri << ")i) / " << 2 * a << endl;
                    cout << "x2 = (" << -b << " - raiz(" << discri << ")i) / " << 2 * a << endl;
                //Si el discriminante tiene raiz exacta
                }else{ 
                    cout << "x1 = (" << -b << " + " << rc_discri << "i) / " << 2 * a << endl;
                    cout << "x1 = (" << -b << " - " << rc_discri << "i) / " << 2 * a << endl;
                }
                //Se imprime que la solucion no tiene solucion en los numero reales
                cout << endl << "La solucion es indeterminada" << endl;      
            //Si el discriminate es positivo
            }else{ 
                x1 = (-b + sqrt(discri)) / (2 * a);
                x2 = (-b - sqrt(discri)) / (2 * a);
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }
        }
    }
    //Impresion de los datos otorgados por el usuario (coeficientes)
    cout << endl << "Los coeficientes son: " << a << ", " << b << ", " << c << endl; 
}
