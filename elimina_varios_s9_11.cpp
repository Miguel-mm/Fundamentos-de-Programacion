#include <iostream>

using namespace std;

int main(){
	const int MAX_NUM_CARACTERES = 100;
	char pos_lectura;
	char pos_escritura;
	char pos_actual;
	int longitud_vector, cantidad_a_borrar;
	int i;
	char caracter;
	
	cout << "Introduzca la longitud del vector de enteros: ";
	cin >> longitud_vector;
	
	int vector_enteros[longitud_vector];
	
	cout << "Introduzca el vector de enteros: ";
	
	for(int generador_vector = 0 ; generador_vector <= longitud_vector - 1; generador_vector++){
		cin >> vector_enteros[generador_vector];
	}
   
	cout << "Introduzca la cantidad de numeros que se dispone a borrar: ";
    cin >> cantidad_a_borrar;
    
    int a_borrar[cantidad_a_borrar];
    
    cout << "Introduzca las posiciones que desea borrar: ";
    
    for(int generador_vector = 0 ;generador_vector <= cantidad_a_borrar -1; generador_vector++){
		cin >> a_borrar[generador_vector];
	}
    
   
	
	
	
	
	
	
}
