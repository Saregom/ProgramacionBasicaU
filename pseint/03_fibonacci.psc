Algoritmo fibonacci_03
	
	num1 = 0
	num2 = 1
	
	Imprimir "Ingrese un numero para calcular su serie fibonacci"
	Leer num_ingresado
	
	Imprimir num1
	Imprimir num2
	
	Para i=1 hasta num_ingresado Hacer
		result = num1 + num2
		num1 = num2
		num2 = result
		
		Imprimir result
	FinPara
	
	Imprimir "El numero ", num_ingresado, " pertence al valor ´", result, "´ en la serie fibonacci"
	
FinAlgoritmo
