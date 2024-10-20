#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int casillaArr[2];

int *casillaFunc(int numCasilla){
    //Declaracion de variables
	int a, b;
	//Switch que toma el valor de la casilla y devulve los puntos correspondientes a la matriz
	switch(numCasilla){
		case 1: a = 0, b = 0; break;
		case 2: a = 0, b = 1; break;
		case 3: a = 0, b = 2; break;
		case 4: a = 1, b = 0; break;
        case 5: a = 1, b = 1; break;
		case 6: a = 1, b = 2; break;
		case 7: a = 2, b = 0; break;
		case 8: a = 2, b = 1; break;
		case 9: a = 2, b = 2; break;
	}
	//se almacenan los dos puntos en un array
	casillaArr[0] = a;
	casillaArr[1] = b;
	//Se retorna el array
	return casillaArr;
}

string tirarDado(string player, string bot){
    int dadoPlayer, dadoBot;
    string start, turno;
	//Si inicia el juego al escribir start
	do{
		cout << "\nEscribe 'start' para lanzar el dado\n";
		cin >> start;
	}while(start != "start");

    //Se asignan los numeros a los dados
	do{
        dadoBot = 1 + rand() % 6;
		dadoPlayer = 1 + rand() % 6;
	}while(dadoPlayer == dadoBot);
	
	//Se muestra el resultado de los dos dados
	cout << "\nDado de " << player << ": " << dadoPlayer << endl;
	cout << "Dado de " << bot << ": " << dadoBot << endl << endl;	
	
	//Se define quien es el turno
	(dadoPlayer > dadoBot) ? turno = player : turno = bot;
	cout << "Inicia: " << turno << endl;

    return turno;
}

int main(){
    //Funcion para cambiar los datos del random dependiendo de la hora
	srand(time(NULL));
	
	//Se definen variables
	int dadoPlayer, dadoBot, casilla, opcContinuar;
	string start, player, bot = "juan_gamer123", turno, marca;
	bool  continuar = true, win = false, empate = false, vacio = false;
	string triqui[3][3];
	
	//Se pide el nombre del jugador
	cout << "Ingresa un nombre\n" ;
	cin >> player;

    //Funcion para tirar el dado
    turno = tirarDado(player, bot);
	
	//Ciclo de Juego
	while(continuar){
        //Se imprime el turno
		cout << "\n\nTurno de: " << turno << endl;
		//Se define la marca dependiendo del jugador y se impprime el turno
		(turno == player) ? marca = "X" : marca = "O";
		
		//Si el turno es del jugador
		if(turno == player){
			//Se pide la casilla del tablero entre 1 y 9
			do{
				cout << "Elije una casilla (1 - 9)" << endl;
				cin >> casilla ;
                cout << endl;
                //Si la casilla esta fuera de rango es incorecta
				if(casilla < 1 || casilla > 9 ){
					cout << "Casilla incorrecta, vuelve a intentarlo" << endl << endl; 
				}
                //Llamado de funcion para saber las casillas de la matriz
                int *valorCasilla = casillaFunc(casilla);
                //Si el valor de las casillas esta ocupado se repie el while
                if(triqui[valorCasilla[0]][valorCasilla[1]] != ""){
                    cout << "La casilla ya esta ocupada, intenta con otra diferente" << endl;
                    casilla = 0;
                }
			}while(casilla < 1 || casilla > 9);
            
		//Si es el turno es del bot
		}else{
			do{
                //Se elige una casilla aleatoria para el bot
                casilla = 1 + rand() % 9;
                int *valorCasilla = casillaFunc(casilla);
                //Se valida la casilla
                if(triqui[valorCasilla[0]][valorCasilla[1]] != ""){
                    casilla = 0;
                }
            }while(casilla == 0);
			//Se imprime la casilla
            cout << "Casilla = " << casilla << endl << endl;
		}
		
		//Se ubica la marca dependiendo de la casilla elegida (X, O)
        int *valorCasilla = casillaFunc(casilla);
        triqui[valorCasilla[0]][valorCasilla[1]] = marca;
        
		//Se muestra el tablero del triqui
		for(int i=0;i<3;i++){
            cout << "| ";
			for(int h=0;h<3;h++){
                if(triqui[i][h] != ""){
                    cout << triqui[i][h] << " | ";
                }else{
                    cout << triqui[i][h] << "  | ";
                }
			}
            if(i != 2) cout << endl << "-------------" << endl;
		}
        
        //Validadcion de casillas
        for(int i=0;i<3;i++){
            //Se evaluan las filas
            if(triqui[i][0] == triqui[i][1] && triqui[i][1] != ""){
                if(triqui[i][1] == triqui[i][2]){
                    win = true;
                }
            }
            //Se evaluan las columnas
            if(triqui[0][i] == triqui[1][i] && triqui[1][i] != ""){
                if(triqui[1][i] == triqui[2][i]){
                    win = true;
                }
            }
		}
        //Se evaluan las diagonales
        if(triqui[0][0] == triqui[1][1] && triqui[1][1] != ""){
            if(triqui[1][1] == triqui[2][2]){
                win = true;
            }
        }
        if(triqui[0][2] == triqui[1][1] && triqui[1][1] != ""){
            if(triqui[1][1] == triqui[2][0]){
                win = true;
            }
        }

        //Se verifica si el truqui aun no esta lleno
        vacio = false;
        for(int i=0;i<3;i++){
            for(int h=0;h<3;h++){
                if(triqui[i][h] == ""){
                    vacio = true;
                }
            }
        }
        //Si el truiqui ya se lleno y nadie gano, se declara empate
        if(!vacio && !win){
            empate = true;
        }
        
        //Condicion por si alguien gana o hay un empate
        if(win || empate){
            //Se imprime el ganador
            if(win){
                cout << "\n\nEL GANADOR ES: " << turno;
            }else if(empate){
                cout << "\n\nHAY UN EMPATE";
            }

            //Opcion por si desea volver ajugar
            do{
                cout << "\n\nDesea volver a jugar? 1 = SI / 2 = NO" << endl;
                cin >> opcContinuar;
                //Se valida la opcion
                if(opcContinuar != 1 && opcContinuar != 2){
                    cout << "\nOpcion invalida, vuelve a intentarlo" << endl;
                }
            }while(opcContinuar != 1 && opcContinuar != 2);
        }
        //Si el turno es dek jugador se cambia al bot y viceversa
        (turno == player) ? turno = bot : turno = player;

        //Si elije salir
        if(opcContinuar == 2){
            cout << "\nGRACIAS POR JUGAR\n";
            continuar = false;
        //Si elige continuar
        }else if(opcContinuar == 1){
            cout << "\nSIGUIENTE RONDA" << endl;
            //Se limpia el tablero (triqui)
            for(int i=0;i<3;i++){
                for(int h=0;h<3;h++){
                    triqui[i][h] = "";
                }
            }
            //Los valores se reinician y se ejecuta lanzar dado
            empate = false;
            win = false;
            opcContinuar = 0;
            turno = tirarDado(player, bot);
        }
	}
}


