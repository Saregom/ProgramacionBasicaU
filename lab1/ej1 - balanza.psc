Algoritmo balanza
	Definir carga_izq, longitud_izq, carga_der, longitud_der, fuerza_izq, fuerza_der Como Entero
	
	Escribir  "Ingresa la carga aplicada al brazo izquierdo"
	Leer carga_izq
	escribir "Ingresa la longitud del brazo izquierdo" 
	Leer  longitud_izq
	Escribir  "Ingresa la carga aplicada al brazo derecho"
	Leer carga_der
	Escribir  "Ingresa la longitud del brazo derecho"
	Leer  longitud_der
	
	fuerza_izq = carga_izq * longitud_izq;
	fuerza_der = carga_der * longitud_der;
	
	si(fuerza_izq == fuerza_der)
		escribir "La balanza esta en equilibrio";
	SiNo
		si(fuerza_izq < fuerza_der)
			Escribir  "Se debe aplicar mas carga al brazo izquierdo"
		SiNo	
			Escribir  "Se debe aplicar mas carga al brazo derecho"
		FinSi
	FinSi	
FinAlgoritmo
