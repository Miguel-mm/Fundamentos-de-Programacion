// Elimina varios

#include <iostream>
using namespace std;

int main(){
	int tamanio_v, numero_posiciones, posicion_lectura, posicion_escritura;
	bool borrar = false;
	
	cout << "Introduzca el número de componentes del vector: ";
	cin >> tamanio_v;
	
	int v[tamanio_v];
	
	cout << "\n";
	
	for(int i = 0 ; i < tamanio_v ; i++){
		cout << "Introduzca componente: ";
		cin >> v[i];
	}
	
	cout << "\n\nIntroduzca el número de posiciones que quiere borrar: ";
	cin >> numero_posiciones;
	
	int a_borrar[numero_posiciones];
	
	cout << "\n";	
	
	for(int i = 0 ; i < numero_posiciones ; i++){
		cout << "Introduzca posición: ";
		cin >> a_borrar[i];
	}
	
	posicion_lectura = 0;
	posicion_escritura = 0;
	
	while(posicion_lectura < tamanio_v){
		for(int i = 0 ; (i < numero_posiciones) && !borrar ; i++){
			if (posicion_lectura == a_borrar[i]){
				borrar = true;
			}
		}
		
		if(!borrar){
			v[posicion_escritura] = v[posicion_lectura];
			posicion_escritura++;
		}
		else{
			borrar = false;
		}
		
		posicion_lectura++;
	}
	
	cout << "\n\nLos enteros resultantes son: ";
	
	for(int i = 0 ; i < posicion_escritura ; i++){
		cout << v[i] << " ";
	}
}
