#include <bits/stdc++.h> //Incluye todas la librerias
using namespace std;

int main(){
	stringstream ss;
	int arr[3] = {1, 2, 3};
		
	string pepe;
	
	for(int j=0;j<3;j++){
		ss << arr[j] << " ";
		
	}	
	pepe += ss.str();
	
	cout << pepe;
	
}
