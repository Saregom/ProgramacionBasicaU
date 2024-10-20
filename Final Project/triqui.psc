Funcion casillaFunc(casilla, casillaArr Por Referencia)
	//Switch que toma el valor de la casilla y devulve los puntos correspondientes a la matriz
	Segun casilla Hacer
		1: a = 1; b = 1
		2: a = 1; b = 2
		3: a = 1; b = 3
		4: a = 2; b = 1
		5: a = 2; b = 2
		6: a = 2; b = 3
		7: a = 3; b = 1
		8: a = 3; b = 2
		9: a = 3; b = 3
	FinSegun
	
	//se almacenan los dos puntos en un array
	casillaArr[1] <- a
	casillaArr[2] <- b
FinFuncion


Funcion turno <- tirarDado(player, bot)
	Definir start, turno Como Caracter
	
	//Si inicia el juego al escribir start
	Hacer
		Escribir ""
		escribir "Escribe " "start" " para lanzar el dado"
		leer start
	Hasta Que (start == "start")

	//Se asignan los numeros a los dados
	Hacer
		dadoBot <- Azar(6) + 1
		dadoPlayer <- Azar(6) + 1
	Hasta Que (dadoPlayer <> dadoBot)

	//Se muestra el resultado de los dos dados
	Imprimir ""
	Imprimir "Dado de ", player, ": ", dadoPlayer
	Imprimir  "Dado de ", bot  ": ", dadoBot   

	//Se define quien es el turno
	si dadoPlayer > dadoBot Entonces
		turno <- player 
	SiNo
		turno <- bot
	FinSi 
FinFuncion

Algoritmo triquiPsint
	
	Dimension triqui[3, 3]
	Dimension valorCasilla[2]
	Dimension casillaArr[2]
	bot <- "juan_gamer123"
	continuar <- Verdadero
	win <- Falso
	empate <- Falso
	
	//Se pide el nombre del jugador
	Imprimir  "Ingresa un nombre"
	Leer player
	
	//Funcion para tirar el dado
	turno = tirarDado(player, bot)
	Imprimir ""
	Imprimir  "Inicia: " turno 
	
	//Ciclo de Juego
	Mientras (continuar = Verdadero)
		//Se imprime el turno
		
		Imprimir ""
		Imprimir ""
		escribir "Turno de: " turno
		//Se define la marca dependiendo del jugador y se impprime el turno
		si turno == player  
			marca = "X" 
		sino
			marca = "O"
		FinSi
		//Si el turno es del jugador
		Si (turno == player)
			//Se pide la casilla del tablero entre 1 y 9
			Hacer
				escribir  "Elije una casilla 1 - 9" 
				leer casilla
				Imprimir ""
				//Si la casilla esta fuera de rango es incorecta
				Si (casilla < 1 | casilla > 9 )
					Escribir "Casilla incorrecta, vuelve a intentarlo"
				SiNo
					//Llamado de funcion para saber las casillas de la matriz
					casillaFunc(casilla, valorCasilla)
					
					//Si el valor de las casillas esta ocupado se repie el while
					Si (triqui[valorCasilla[1], valorCasilla[2]] <> "")
						escribir "La casilla ya esta ocupada, intenta con otra diferente" 
						casilla = 0
					FinSi
				FinSi
				
				
			Hasta Que (casilla >= 1 & casilla <= 9)
			//Si es el turno es del bot
		SiNo
			Hacer
				//Se elige una casilla aleatoria para el bot
				casilla = Azar(9) + 1
				casillaFunc(casilla, valorCasilla)
				
				//Se valida la casilla
				Si (triqui[valorCasilla[1], valorCasilla[2]] <> "")
					casilla = 0
				FinSi
			Hasta Que (casilla <> 0)
			//Se imprime la casilla
			escribir  "Casilla = " casilla 
			Imprimir ""
		FinSi
		
		//Se ubica la marca dependiendo de la casilla elegida (X, O)
		triqui[valorCasilla[1], valorCasilla[2]] = marca
		
		//Se muestra el tablero del triqui
		Para  i=1 Hasta 3 Con Paso 1
			escribir "| " Sin Saltar
			Para  h=1 Hasta 3 Con Paso 1
				Si (triqui[i,h] <> "")
					escribir  triqui[i,h] " | " Sin Saltar
				SiNo
					escribir triqui[i, h] "  | " Sin Saltar
				FinSi
			FinPara
			Si (i <> 3) 
				Escribir ''
				escribir  "-------------"
			FinSi
		FinPara
		
		//Validadcion de casillas
		Para  i=1 Hasta 3 Con Paso 1
			//Se evaluan las filas
			Si (triqui[i,1] == triqui[i,2]  y  triqui[i,2] <> "")
				Si (triqui[i,2] == triqui[i,3])
					win = Verdadero
				FinSi
			FinSi
			//Se evaluan las columnas
			Si (triqui[1,i] == triqui[2,i]  y  triqui[2,i] <> "")
				Si (triqui[2,i] == triqui[3,i])
					win = Verdadero
				FinSi
			FinSi
		FinPara
		
		//Se evaluan las diagonales
		Si (triqui[1,1] == triqui[2,2]  y  triqui[2,2] <>"")
			Si (triqui[2,2] == triqui[3,3])
				win = Verdadero
			FinSi
		FinSi
		Si (triqui[1,3] == triqui[2,2]  y  triqui[2,2] <> "")
			Si (triqui[2,2] == triqui[3,1])
				win = Verdadero
			FinSi
		FinSi
		
		//Se verifica si el truqui aun no esta lleno
		vacio = Falso
		Para  i=1 Hasta 3 Con Paso 1
			Para  h=1 Hasta 3 Con Paso 1
				Si (triqui[i,h] == "")
					vacio = Verdadero
				FinSi
			FinPara
		FinPara
		
		//Si el truiqui ya se lleno y nadie gano, se declara empate
		Si (vacio == Falso y win == Falso)
			empate = Verdadero
		FinSi
		
		
		//Condicion por si alguien gana o hay un empate
		Si (win == Verdadero | empate == Verdadero)
			//Se imprime el ganador
			Imprimir ""
			Imprimir ""
			Si (win == Verdadero)
				escribir "EL GANADOR ES: "  turno
			SiNo Si (empate == Verdadero)
					escribir "HAY UN EMPATE"
				FinSi
			FinSi
			//Opcion por si desea volver ajugar
			Hacer
				Imprimir ""
				escribir "Desea volver a jugar? 1 = SI / 2 = NO" 
				leer opcContinuar
				
				//Se valida la opcion
				Si (opcContinuar <> 1  &  opcContinuar <> 2)
					escribir "Opcion invalida, vuelve a intentarlo" 
				FinSi
			Hasta Que (opcContinuar = 1 | opcContinuar = 2)
		FinSi
		
		//Si el turno es del jugador se cambia al bot y viceversa
		si turno == player Entonces
			turno <- bot 
		SiNo
			turno <- player
		FinSi 
		
		//Si elije salir
		Si (opcContinuar == 2)
			Imprimir ""
			escribir "GRACIAS POR JUGAR"
			continuar = Falso
			
		//Si elige continuar
		SiNo Si (opcContinuar == 1)
				Imprimir ""
				escribir "SIGUIENTE RONDA" 
				
				//Se limpia el tablero (triqui)
				Para  i=1 Hasta 3 Con Paso 1
					Para  h=1 Hasta 3 Con Paso 1
						triqui[i,h] = ""
					FinPara
				FinPara
				
				//Los valores se reinician y se ejecuta lanzar dado
				empate = Falso
				win = Falso
				opcContinuar = 0
				turno = tirarDado(player,bot)
			FinSi
		FinSi
	FinMientras
FinAlgoritmo