/*
	Sustituir caracter a vector con vector auxiliar
*/


#include <iostream>
using namespace std;

int main () {
	
	int i , j , referencia;
	const char TERMINADOR = '#';
	char vector [30];
	char vector_sustituido [30];
	char a_cambiar [10];
	char a_borrar, contenido_vector, vector_contenido_a_cambiar;
	bool es_caracter_borrar;
	
	i=0;
	j=0;
	referencia = 0;
	
	cin >> contenido_vector;
	
	while ( contenido_vector != TERMINADOR){
		vector [i] = contenido_vector;
		i++;
		cin >> contenido_vector;
	}
	
	cin >> vector_contenido_a_cambiar;
	
	while ( vector_contenido_a_cambiar != TERMINADOR ){
		a_cambiar [j] = vector_contenido_a_cambiar;
		j++;
		cin >> vector_contenido_a_cambiar; 
		
	}
	
	cin >> a_borrar;
	
	for ( int k = 0 ; k<=i ; k++){
		es_caracter_borrar = a_borrar == vector [k];
		
		if ( es_caracter_borrar){
			for ( int m=0 ; m<j ; m++){
				vector_sustituido [referencia] = a_cambiar [m];
				referencia++;
			}
		}
		else {
			vector_sustituido [referencia] = vector[k];
			referencia++;
		}
	}
	referencia = referencia - 1;
	
	for ( int n=0 ; n < referencia ; n++){
		cout << vector_sustituido [n] << " ";
	}
	
}
	 
	
	
