#include <iostream>
#include <math.h>>
using namespace std;
int main() {
  int num,fact,cont,euler;
cout<<"Ingrese el numero para hallar su factorial"<<endl;
cin>>num;//lectura de la variable introducida por el usuario
  fact=1;
  cont=1;
  //inialiazacion de variables en 1
  while (cont<num){
    cont++;
    fact=fact*cont;
    //ciclo mientras para hacerlo hasta el numero que introdujo el usuario
       
  }
  cout<<"El factorial de "<<num<<" es: "<<fact<<endl;
  //impresion de la variable fact
}