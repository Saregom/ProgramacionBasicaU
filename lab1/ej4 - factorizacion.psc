Algoritmo ecuacion_cuadratica
	
	Escribir "Digite 3 numeros para calcular la ecuacion cuadratica:"
	Escribir "Digita el coeficiente para x² (a)"
	leer a
	Escribir "Digita el coeficiente para x (b)"
	leer b
	Escribir "Digita el coeficiente independiente (c)"
	leer c
	
	Escribir "La ecucion es: ", a,"x² + (", b,")x + (", c,")"
	
	si(a < 0) Entonces
		a2 = -a;
		b = -b;
		c = a2 * (-c)
	SiNo
		c = a * c;
	FinSi
	
	si(c < 0)
		c2 = -c;
	SiNo
		c2 = c;	
	FinSi
	
	para i=1 hasta c2 Con Paso 1 Hacer
		si(c2 % i == 0) Entonces
			para j=1 hasta c2 Con Paso 1 Hacer
				si(c2 % j == 0)
					si(i*j == c & i+j == b) Entonces
						num1 = i;
						num2 = j;
						solucion = 1;
					SiNo
						si(-i*j == c & -i+j == b) Entonces
							num1 = i;
							num2 = j;
							solucion = 2;
						SiNo
							si -i*(-j) == c & -i+(-j) == b Entonces
								num1 = i;
								num2 = j;
								solucion = 3;
							FinSi
						FinSi
					FinSi
				FinSi
			FinPara
		FinSi
	FinPara
	
	//Imprimir -num1, ", ", num2
	condicion = num1 > num2;
	
	si(solucion == 2) Entonces
		num1 = -num1;
	SiNo
		si (solucion == 3)Entonces
			num1 = -num1;
			num2 = -num2;
		FinSi
	FinSi

	si(condicion) Entonces
		numMayor = num1;
		numMenor = num2;
	SiNo
		numMayor = num2;
		numMenor = num1;
	FinSi
	
	signo1 = " + "
	signo2 = " + "
	
	si(numMayor < 0) Entonces
		numMayor = -numMayor
		signo1 = " - "
	FinSi
	si(numMenor < 0) Entonces
		numMenor = -numMenor
		signo2 = " - "
	FinSi
	
	//Imprimir numMayor, ", ", numMenor
	
	si a == 0 Entonces
		imprimir "La ecuacion no es cuadratica, x^2 = 0";
	SiNo
		si b == 0 & c == 0 Entonces
			Imprimir "x^2"
		SiNo
			si(solucion == 0) Entonces
				imprimir "La ecuacion no se puede resolver por factorizacion o no tiene solucion en los numeros reales";
			SiNo
				si(a > 1)
					si(numMayor % a <> 0 & numMenor % a <> 0) Entonces
						imprimir "(x", signo1, numMayor, "/", a, ") (", a, "x", signo2, numMenor, ")";
					SiNo
						si (numMayor % a == 0)
							imprimir "(x", signo1, numMayor/ a, ") (", a, "x", signo2, numMenor, ")";
						SiNo
							imprimir "(x", signo2, numMenor/a, ") (", a, "x", signo1, numMayor, ")";
						FinSi
					FinSi
				SiNo
					si(a < -1) Entonces
						si(numMayor % a <> 0 & numMenor % a <> 0) Entonces
							imprimir "-(x", signo1, numMayor, "/", a, ") (", a, "x", signo2, numMenor, ")";
						SiNo
							si (numMayor % a == 0)
								imprimir "-(x", signo1, numMayor/a, ") (", a, "x", signo2, numMenor, ")";
							SiNo
								imprimir "-(x", signo2, numMenor/a, ") (", a, "x", signo1, numMayor, ")";
							FinSi
						FinSi
					SiNo
						si(a == 1)Entonces
							imprimir "(x", signo1, numMayor, ") (x", signo2, numMenor, ")";
						SiNo
							si(a == -1) Entonces
								imprimir "-(x", signo1, numMayor, ") (x", signo2, numMenor, ")";
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
