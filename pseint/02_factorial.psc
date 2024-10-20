Algoritmo factorial_02
	
	Imprimir "Digita un numero para calcular el factorial: "
	Leer num
	
	factorial = 1
	contador = 1
	
	Mientras contador < num Hacer
		contador = contador + 1 
		factorial = factorial * contador
		euler = 1 / factorial
	FinMientras
	
	Imprimir "El factorial de ", num, " es: ", factorial
	
FinAlgoritmo