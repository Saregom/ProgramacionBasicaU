Algoritmo euler_04
	
	Imprimir "Digita un numero para calcular la serie de euler"
	Leer num
	
	factorial = 1
	contador = 1
	euler1 = 1
	Imprimir "n = 1: ", euler1
	
	Mientras contador < num Hacer
		factorial = factorial * contador
		contador = contador + 1 
		division = 1 / factorial
		euler1 = euler1 + division
		Imprimir "n = ", contador, ": ", euler1
	FinMientras
	
	Imprimir "El valor de euler en la posicion ", num, " es: ", euler1
	
FinAlgoritmo