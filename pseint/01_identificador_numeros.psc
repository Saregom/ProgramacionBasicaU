Algoritmo identificador_numeros
	
	Escribir "Ingrese la cantidad de n�meros que desee analizar"
	Leer n
	Dimension numeros[n]
	
	cont_pos = 0
	cont_neg = 0
	cont_ceros = 0
	
	Para i<-1 Hasta n Hacer
		Escribir "Ingrese el dato N�",i,":"
		Leer numeros[i]
	FinPara
	
	Imprimir ""
	para cada num de numeros Hacer
		Si num > 0 Entonces
			Imprimir num, " es positivo"
			cont_pos = cont_pos+1
		SiNo 
			Si num < 0 Entonces 
				Imprimir num, " es negativo"
				cont_neg = cont_neg+1
			SiNo
				si num == 0 Entonces
					Imprimir num, " es igual a 0"
					cont_ceros = cont_ceros+1
				FinSi
				
			FinSi
		FinSi
	FinPara
	
	Imprimir ""
	Imprimir "N�meros positivos: ", cont_pos
	Imprimir "N�mros negativos: ", cont_neg
	Imprimir "N�meros iguales a cero: ", cont_ceros
	Imprimir "Total de n�meros analizados: ", n
	
FinAlgoritmo
