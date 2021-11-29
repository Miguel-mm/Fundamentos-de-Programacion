#include <iostream>
using namespace std;

int main (){
	bool fecha_correcta, anio_bisiesto;
	const int NUM_MESES = 12;
	int dias_meses[NUM_MESES] = {31,28,31,30,31,30,31,31,30,31,30,31};
	const int TERMINADOR = -1;
	int anio, mes, dia;
	int feb_bisiesto = 29;
	
	cout << "Introduzca las fechas que desea comprobar (dia/mes/anio): ";
	cin >> dia;
	
	while(dia > TERMINADOR){
		cin >> mes;
		cin >> anio;
		
		anio_bisiesto = (anio % 4 == 0 && !(anio % 100 == 0)) || anio % 400 == 0;
		
		if(anio_bisiesto){
			dias_meses[1] = feb_bisiesto;
		}
		
		if(dia <= dias_meses[mes]){
			fecha_correcta = true;
		}
		else{
			fecha_correcta = false;
		}
		
		if(fecha_correcta){
			cout << "\nLa fecha es correcta";
		}
		
		else
			cout << "\nLa fecha no es correcta";
		
			
	}
}
