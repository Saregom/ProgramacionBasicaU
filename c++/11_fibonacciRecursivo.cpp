#include <iostream>
using namespace std;
// funcion que calcula la serie de fibonacci con recursividad
int fibonacciRecursivo(int n, int a, int b){
    //Se declara la variable c
    int c;
    //se asignan los valores a las variables
    c=(a+b);
    a=b;
    b=c;
    cout <<c<<endl; 
    n--;
    //condicional que determina cuando la funcion termina
    if(n==2){
        //y retorna el valor de c
        return c;
    }
    //se realiza la recursividad de la funcion
    fibonacciRecursivo(n, a, b);
    // y se de retorna el valor de c 
    return c;
}

int main() {
    //Declaracion de variables
    int n, a, b, c;
    //Lectura del numero n
    cout << "Ingrese cuantos datos quiere saber de la serie de fibonacci" << endl;
    cin >> n;

    //Se inicializan las variables de a y b
    a=0;
    b=1;
    //condicional que determina cuantos numero imorimir de la serie
    if(n == 1){
        cout << endl << a << endl;
        c=a;
    }else{
        cout << endl << a << endl;
        cout << b << endl;
        c=b;
        //Si n mayor a 2 se llama a la funcion recursiva
        if(n>2){
            c = fibonacciRecursivo(n, a, b);
        }
    }
    
    //Se imprime la informacion correspondiente de la serie
    cout << endl << "El numero " << n << " pertenece a al numero "<< c << " en la serie fibonacci" << endl;
    return 0;
}