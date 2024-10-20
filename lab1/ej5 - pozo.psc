Algoritmo pozo
	Escribir "Ingrese el valor de la longitud de la base del pozo"
	Leer base
	Escribir "Ingrese el valor de la distancia de la primer varilla"
	Leer varilla1
	Escribir "Ingrese el valor de la distanca de la segunda varilla"
	leer varilla2
	
	
	
	si (base > varilla1 | base > varilla2) Entonces
		Escribir "Las variillas no es intersectan en ningun punto "
	SiNo
		si base == 0 Entonces
			Imprimir "La longitud del pozo no puede ser igual a 0"
		SiNo
			h1= rc(varilla1^2 - base^2)
			h2=rc(varilla2^2 - base^2) // teorema de pitagoras
			m1=h1/base
			m2=(-h2/base)   // pendiente de la recta 
			
			x=h2/(m1-m2) // h1/(m2-m1)
			
			h3=m1*x // h3 = m2*x
			Escribir "la altura entre el fondo del pozo a la interseccion de las dos varillas es de: ", h3, "m"
		FinSi
	FinSi
FinAlgoritmo
