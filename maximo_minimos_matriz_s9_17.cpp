// Máximo de los mínimo de una fila en un matriz

#include <iostream>
using namespace std;

int main(){
	int num_filas, num_columnas, fila_actual, minimo_fila, maximo_minimos;
	
	cout << "Introduzca el número de filas: ";
	cin >> num_filas;
	cout << "Introduzca el número de coulmnas: ";
	cin >> num_columnas;
	
	int matriz[num_filas][num_columnas];
	
	for(int i = 0 ; i < num_filas ; i++){
		fila_actual = i + 1;
		cout << "\nIntroduzca los elementos de la fila " << fila_actual << ": ";
		for(int j = 0 ; j < num_columnas ; j++){
			cin >> matriz[i][j];
		}
	}
	
	for(int i = 0 ; i < num_filas ; i++){
		minimo_fila = matriz[i][0];
		
		for(int j = 1 ; j < num_columnas ; j++){	
			if (matriz[i][j] < minimo_fila){
				minimo_fila = matriz[i][j];
			}
		}
		
		if(i == 0 || minimo_fila > maximo_minimos){
			maximo_minimos = minimo_fila;
		}
	}
	
	cout << "\n\nEl maximo de los minimos de cada fila es " << maximo_minimos << "\n\n";
}
