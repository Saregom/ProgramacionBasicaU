Algoritmo ecuacion_cuadratica
	
	Escribir "Digite 3 numeros para calcular la ecuacion cuadratica:"
	Escribir "Digita el coeficiente para x² (a)"
	leer a
	Escribir "Digita el coeficiente para x (b)"
	leer b
	Escribir "Digita el coeficiente independiente (c)"
	leer c
	
	Escribir "La ecucion es: ", a,"x² + (", b,")x + (", c,")"
	
	discri = b^2 - 4*a*c
	
	si discri < 0 Entonces
		discri_neg = -discri
	FinSi
	
	rc_discri = rc(discri_neg)
	
	si a == 0 Entonces
		Escribir "No es una funcion cuadratica (x²) = 0"
	SiNo
		si discri == 0 Entonces
			x = -b / 2*a
			Escribir "x = " x
		SiNo
			si discri < 0 Entonces
				si rc_discri - trunc(rc_discri) > 0 Entonces // ej: 2.5 - 2 = 0.5 > 0 -> raiz no exacta
					Imprimir "x1 = (", -b, " + raíz(", discri, ")i) / ", 2*a
					Escribir "x2 = (", -b, " - raíz(", discri, ")i) / ", 2*a
				SiNo
					Imprimir "x1 = (", -b, " + ", rc(discri_neg),"i) / ", 2*a
					Imprimir "x1 = (", -b, " - ", rc(discri_neg),"i) / ", 2*a
				FinSi
			SiNo
				x1 = (-b + rc(discri)) / (2*a)
				x2 = (-b - rc(discri)) / (2*a)
				Escribir "x1 = ", x1
				Escribir "x2 = ", x2
			FinSi
		FinSi
	FinSi
	
	
	
	
	
	Escribir "Los coeficientes son: ", a, ", ", b,", ", c
	
	si discri < 0 Entonces
		Escribir "La solucion es indeterminada"
	FinSi
	
	
	
	
	
	
	
	
	//div1 = -(b) + rc(b^2 - 4*a*c)
	
	//Escribir discriRc
	//Escribir div1
	//escribir div1 / (2*a)
	
	
FinAlgoritmo
