#include <iostream>
using namespace std;

int main(){
	//Declaracion de variabels
	int a, b, c, a2, c2, a3, b3, c3, num1=0, num2=0, solucion=0, numMayor=0, numMenor=0;
	bool condicion;
	string signo1= " + ", signo2= " + ";
	//Peticion de numeros
	cout << "Digite 3 numeros para calcular la ecuacion cuadratica:\n";
	cout << "Digita el coeficiente para x^2 (a)\n";
	cin >> a;
	cout << "Digita el coeficiente para x (b)\n";
	cin >> b;
	cout << "Digita el coeficiente independiente (c)\n";
	cin >> c;
	
	cout << "La ecucion es: " << a << "x^2 + (" << b << ")x + (" << c << ")\n\n";
	a3 = a, b3 = b, c3 = c;
	//Condicion si a es menor a 0
	if(a < 0){
		a2 = -a;
		b = -b;
		c = a2 * -c;
	}else{
		c = a * c;
	}
	//Condicion si a es menor a 0
	if(c < 0){
		c2 = -c;
	}else{
		c2 = c;	
	}
	//Bucle que haya los numeros
	for(int i=1; i<=c2; i++){
		if(c2 % i == 0){
			for(int j=1; j<=c2; j++){
				if(c2 % j == 0){
					num1 = i;
					num2 = j;
					if(num1*num2 == c && num1+num2 == b){
						solucion = 1;
					}else if(-num1*num2 == c && -num1+num2 == b){
						solucion = 2;
					}else if(-num1*-num2 == c && -num1+-num2 == b){
						solucion = 3;
					}
				}
				if(solucion>0){
					break;
				}
			}
		}
		if(solucion>0){
			break;
		}
	}
	
	condicion = num1 > num2;
	
	if(solucion == 2){
		num1 = -num1;
	}else if(solucion == 3){
		num1 = -num1;
		num2 = -num2;
	}
	
	if(condicion){
		numMayor = num1;
		numMenor = num2;
	}else{
		numMayor = num2;
		numMenor = num1;
	}
	
	if(numMayor < 0){
		numMayor = -numMayor;
		signo1 = " - ";
	}
	
	if(numMenor < 0){
		numMenor = -numMenor;
		signo2 = " - ";
	}
	
	if(a == 0){
		cout << "La ecuacion no es cuadratica x^2 = 0" << endl;
	}else if(b == 0 & c == 0){
		cout << "x^2";
	}else if(solucion == 0){
		float rc_discri, discri_neg
		//cout << "La ecuacion no se puede resolver por factorizacion o no tiene solucion en los numeros reales";
		if(a3<0){
	        a3 = -a3;
	        b3 = -b3;
	        c3 = -c3;
	    }
	    //Asignacion del discriminante
	    float discri = pow(b3, 2) - (4 * a3 * c3); 
	
	    //Si el disciminate es negativo, se convierte a positivo
	    if (discri < 0) {
	        discri_neg = -discri;
	        rc_discri = sqrt(discri_neg); 
	    }
	
	    // Si el coeficiente 'a' es igual 0, no es una ecuacion cuadratica
	    if(a3 == 0){ 
	        cout << "No es una funcion cuadratica (x^2) = 0" << endl;
	    // Si 'a' no es igual 0
	    }else{
	        //Si el discrimianante es igual a 0, solo habra una raiz solucion
	        if(discri == 0){
	            x = -b3 / 2 * a3;
	            cout << "x = " << x << endl; 
	        //Si el discrimante no es igual a 0
	        }else{                  
	            //Si el discriminante es negativo, el resultado sera imaginario
	            if(discri < 0){
	                //Si el discriminante no tiene raiz exacta
	                if (rc_discri - trunc(rc_discri) > 0) { 
	                    cout << "(" << -b3 << " + raiz(" << discri << ")i) / " << 2 * a3 << endl;
	                    cout << "(" << -b3 << " - raiz(" << discri << ")i) / " << 2 * a3 << endl;
	                //Si el discriminante tiene raiz exacta
	                }else{ 
	                    cout << "(" << -b3 << " + " << rc_discri << "i) / " << 2 * a3 << endl;
	                    cout << "(" << -b3 << " - " << rc_discri << "i) / " << 2 * a3 << endl;
	                }
	                //Se imprime que la solucion no tiene solucion en los numero reales
	                cout << endl << "La solucion es indeterminada" << endl;      
	            //Si el discriminate es positivo
	            }else{ 
	                float x1 = (-b3 + sqrt(discri)) / (2 * a3);
	                float x2 = (-b3 - sqrt(discri)) / (2 * a3);
	                cout << "x1 = " << x1 << endl;
	                cout << "x2 = " << x2 << endl;
	            }
	        }
	    }
	    //Impresion de los datos otorgados por el usuario (coeficientes)
	    //cout << endl << "Los coeficientes son: " << a << ", " << b << ", " << c << endl; 
	}else if(a>1){
		if(numMayor % a != 0 & numMenor % a != 0){
			cout << "(x" << signo1 << numMayor << "/" << a << ") (" << a << "x" << signo2 << numMenor << ")";
		}else if(numMayor % a == 0){
			cout << "(x" << signo1 << numMayor/a << ") (" << a << "x" << signo2 << numMenor << ")";
		}else{
			cout << "(x" << signo2 << numMenor/a << ") (" << a << "x" << signo1 << numMayor << ")";
		}
	}else if(a<-1){
		if(numMayor % a != 0 & numMenor % a != 0){
			cout << "-(x" << signo1 << numMayor << "/" << a << ") (" << a << "x" << signo2 << numMenor << ")";
		}else if(numMayor % a == 0){
			cout << "-(x" << signo1 << numMayor/a2 << ") (" << a2 << "x" << signo2 << numMenor << ")";
		}else{
			cout << "-(x" << signo2 << numMenor/a2 << ") (" << a2 << "x" << signo1 << numMayor << ")";
		}
	}else if(a == 1){
		cout << "(x" << signo1 << numMayor << ") (x" << signo2 << numMenor << ")";
	}else if(a == -1){
		cout << "-(x" << signo1 << numMayor << ") (x" << signo2 << numMenor << ")";
	}
}
	
