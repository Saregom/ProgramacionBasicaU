#include <bits/stdc++.h>
using namespace std;

int main(){
	stringstream ss;
	int cars, cont = 0;
	cin >> cars;
	
	int positions[cars][2];
	int positions2[cars][2];
	
	string results[10];
	string result;
		
	do{
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				positions[i][j] = 0; 
			}	
		}
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				positions2[i][j] = 0; 
			}	
		}
		
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				cin >> positions[i][j];
			}	
		}
		
		cout << endl <<  "test1" << endl;
		
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				cout << positions[i][j] << " ";
			}
			cout << endl;
		}
		
		cout << endl <<  "test2" << endl;
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				cout << positions2[i][j] << " ";
			}
			cout << endl;
		}
		
		
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				int guard = positions[i][j];
				positions2[i][j] = guard;
				//cout << positions[i][j] << " ";
			}
		}
		
		cout << endl <<  "test3" << endl;
		
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				cout << positions[i][j] << " ";
			}
			cout << endl;
		}
		
		cout << endl <<  "test4" << endl;
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				cout << positions2[i][j] << " ";
			}
			cout << endl;
		}
		/*cout << endl << "two" << endl;
		
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				cout << positions[i][j] << " ";
			}	
			cout << endl << "next" << endl;
			for(int j=0;j<2;j++){
				cout << positions2[i][j] << " ";
			}
			cout << endl;
		}
		
		cout << "pos3" << endl;
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				cout << positions[i][j] << " ";
			}	
			cout << endl << "next" << endl;
			for(int j=0;j<2;j++){
				cout << positions2[i][j] << " ";
			}	
			cout << endl;
		}
		cout << "pos4" << endl;
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				cout << positions2[i][j] << " ";
			}	
			cout << endl;
		}*/
		
		//for(int i=0;i<cars;i++){
			for(int i=0;i<cars;i++){
				//cout << positions[i][j] << " ";
				int pos1 = positions[i][0];
				int pos2 = positions[i][1];
				
				if(pos2 > cars || -pos2 > cars){
					ss << -1;
					result += ss.str();
					results[cont] = result;
					break;
				}else{
					if(pos2 > 0 || pos2 < 0){
						if(positions[i+pos2][1] == 0){
							ss << -1;
							result += ss.str();
							results[cont] = result;
							break;
						}else{
							positions2[i+pos2][0] = pos1;
							positions2[i+pos2][1] = pos2;
						}
					}
				}
			}	
			
		//}
		if(results[cont] != "-1"){
			//for(int i=0;i<cars;i++){
				for(int j=0;j<cars;j++){
					int resguard = positions2[j][0];
					ss << resguard << " ";
				}	
				result += ss.str();
				results[cont] = result;
			//}
		}
		
		cout << "pos" << endl;
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				cout << positions[i][j] << " ";
			}	
			cout << endl;
		}
		cout << "pos2" << endl;
		for(int i=0;i<cars;i++){
			for(int j=0;j<2;j++){
				cout << positions2[i][j] << " ";
			}	
			cout << endl;
		}
		
		cont++;
		ss.str("");
		result = "";
		cin >> cars;
		int positions[cars][2];
		int positions2[cars][2];
		
		
		//cout << endl <<  "first" << endl;
		
		
	}while(cars != 0);
	
	for(int j=0;j<cont;j++){
		/*if(results[j] == 0){
			
		}*/
		cout << results[j] << endl;
	}
}
