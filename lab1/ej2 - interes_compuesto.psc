Algoritmo interes_compuesto
	Definir capital, interes, years, interes_real, capital_final Como Real
	
	Imprimir "Introduce la suma del capital"
	leer capital
	imprimir "Introduce el interes"
	leer interes
	imprimir "Introduce el numero de años"
	leer years
	
	interes_real = interes/100;
	capital_final = capital * ((1+interes_real) ^ years);
	
	Imprimir "El capital final es: ", trunc(capital_final*100.0)/100.0
	
FinAlgoritmo
