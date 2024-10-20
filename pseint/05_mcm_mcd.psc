Algoritmo mcm_mcd_05
	
	Definir n1, n2, n3, n_min, n_max, mcm, posible_mcm, mcd, i Como Entero
	
	escribir "Digita tres numeros para calcular el M.C.M y el M.C.D"
	leer n1, n2, n3

	si n1>n2 & n1>n3 Entonces
		n_max <- n1
	SiNo
		si n2>n1 & n2>n3 Entonces
			n_max <- n2
		SiNo
			n_max <- n3
		FinSi
	FinSi
	
	si n1<n2 & n1<n3 Entonces
		n_min <- n1
	SiNo
		si n2<n3 Entonces
			n_min <- n2
		SiNo
			n_min <- n3
		FinSi
	FinSi
	
	mcm <- 0
	i <- 1
	
	Mientras mcm == 0 Hacer
		posible_mcm <- n_max * i
		i <- i + 1
		
		si posible_mcm % n1 == 0 & posible_mcm % n2 == 0 & posible_mcm % n3 == 0 Entonces
			mcm <- posible_mcm
		FinSi
		
	FinMientras
	
	Imprimir  "El minimo comun multiplo es: ", mcm
	
	mcd <- 1 
	i <- 1
	
	mientras i <= n_min Hacer
		si n1 % i == 0 & n2 % i == 0 & n3 % i == 0  Entonces
			mcd <- i
		FinSi
		i <- i + 1
		
	FinMientras
	
	Escribir "El maximo común divisor es: " mcd 
FinAlgoritmo
