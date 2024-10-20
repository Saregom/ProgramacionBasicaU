#include <iostream>
using namespace std;

int main() {
    int n;
    int A[n];
    
    cout << "Ingrese la dimension del array" << endl;
    cin >> n;
  
    for(int i=0;i<n;i++){
        cout << "Ingrese el dato #" << i << " del array" << endl;
        cin >> A[i];    
    }
    
    cout << endl << "Los datos son:" << endl;
    for (int i=0;i<n;i++){
        cout << A[i] << ", ";
    }
    cout << endl << "La dimension del array es: " << n << endl;
}
