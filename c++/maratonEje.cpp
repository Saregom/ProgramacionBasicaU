#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	stringstream ss;
	int n = 1, suma, cont, n2 = 0;
	int corrupt[2];
	
	cin >> n;
	int matriz[n][n];
	string states[n];
		
	do{	
		for(int i=0; i<n; i++){
			for(int k=0; k<n; k++){
				cin >> matriz[i][k];
			}
		}
		cont = 0;
		for(int i=0; i<n; i++){
			suma = 0;
			for(int k=0; k<n; k++){
				suma += matriz[i][k];
			}
			if(suma != 0 && suma != 2 && suma != 4){
				if(cont >= 1){
					states[n2] = "Corrupt";
					for(int i=0; i<2; i++){
						corrupt[i] = 0;
					}
					break;
				}else{
					corrupt[cont] = i+1;
					cont++;
				}
			}
		}
		if(cont == 0){
			cont ++;
		}
		
		if(states[n2] != "Corrupt"){
			for(int i=0; i<n; i++){
				suma = 0;
				for(int k=0; k<n; k++){
					suma += matriz[k][i];
				}
				if(suma != 0 && suma != 2 && suma != 4){
					if(cont >= 2){
						
						states[n2] = "Corrupt";
						for(int i=0; i<2; i++){
							corrupt[i] = 0;
						}
						cont = 3;
						break;
					}else{
						corrupt[cont] = i+1;
						cont++;
					}
				}
			}
			if(cont == 1){
				cont --;
			}
			if(cont == 2){
				ss << "Change bit (" << corrupt[0] << "," << corrupt[1] << ")";
				states[n2] = ss.str();
			}else if(cont == 0){
				states[n2] = "OK";
				for(int i=0; i<2; i++){
					corrupt[i] = 0;
				}
			}
		}		
		n2++;
		cin >> n;
	}while(n != 0);

	for(int i=0; i<n2; i++){
		cout << states[i] << endl;
	}
}
