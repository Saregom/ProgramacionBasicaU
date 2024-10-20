#include <iostream>
#include <cmath>
using namespace std;

//Funcion para calcular la desviacion tipica
float desviacion_tipica(float mValidas[], int n){
    //Declaracion de variables de la funcion
	int j;
    //N = Sumatoria de los datos
    //dt = Desviacion tipica
    float media, N, sumatoriaVarianza = 0, varianza, dt;

    //Sumatoria de los datos
    for(int i=0;i<n;i++){ 
        N += mValidas[i];  
    }
    
    //Se calcula la media (Sumatoria de datos / numero total de datos)
    media = N / n;
    
    //Se calcula la sumatoria de: Cada dato de las muestras menos la media, todo  al cuadrado
    for(int i=0;i<n;i++){
        sumatoriaVarianza += pow(mValidas[i] - media, 2);
    }
    //Se calcula la varianza 
    varianza = sumatoriaVarianza / n;
	    
    //Se calcula la desviación tipica (Raiz cuadrada de la varanza)
    dt = sqrt(varianza);
    
    //Se retorna la desviacion tipica
    return dt;
}    

int main() {
    //Declaracion de variables (n = numero de poblacion, n2 = total de muestras validas)
    int n, n2 = 0, j = 0;
    float desv_tip;

    //Peticion del numero de poblacion
    cout << "ingrese el numero de personas a las cuales les hizo las pruebas" << endl;
    cin >> n;
    //Se declara array de muestras
    float muestras[n];
    //Peticionde muestras para el array
    for(int i = 0;i<n;i++){
        cout << "Ingrese el valor de la muestra #" << i << endl;
        cin >> muestras[i];
    }

    //Se calcula el total de muestras validas para contraer la enfermedad
    for (int i=0; i<n; i++) {
        //Si la muestra esta entre el intervalo de 80 a 100 entra en la condcion
        if(muestras[i] >= 80 && muestras[i] <= 100){
            n2++;
        }
    }
    //Se declara array de muestras validas
    float muestrasValidas[n2];
    //Se ingresan las muestras validas en el nuevo array
    for (int i=0; i<n; i++) {
        if(muestras[i] >= 80 && muestras[i] <= 100){
            muestrasValidas[j] = muestras[i];
            j++;
        }
    }

    //Se muestran la desviacion tipica
    desv_tip = desviacion_tipica(muestrasValidas, n2);
    if(desv_tip > 0){
    	cout << endl << "La desviacion tipica es: " << desv_tip << endl;
	}else{
		cout << endl << "La desviacion tipica es: 0" << endl;
	}
    
    
    //Se muestra la lista de todas las muestras validas
    if(sizeof(muestrasValidas)/sizeof(muestrasValidas[0]) == 0){
    	cout << endl << "No hay ninguna muestra valida" << endl;
	}else{
		cout << endl << "Las muestras validas son:" << endl;
		for (int i=0; i<n2; i++) {
	        cout << muestrasValidas[i] << ", ";
	    }
	}
    
}
