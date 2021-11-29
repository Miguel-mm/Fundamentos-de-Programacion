// Límites de velocidad en una matriz

#include <iostream>
using namespace std;

int main(){
	const int MAX_FIL = 5;
	const int MAX_COL = 10;
	int cuadro_velocidad[MAX_FIL][MAX_COL];
	int velocidad_inicial;
	int velocidad_actual;
	int incremento;
	
	velocidad_inicial = 31;
	incremento = 10;
	
	for(int num_fil = 0 ; num_fil < MAX_FIL ; num_fil++){
		if(num_fil == 1){
			velocidad_inicial = velocidad_inicial + incremento * 2;
		}
		else if(num_fil >= 2){
			velocidad_inicial = velocidad_inicial + incremento;
		}
			
		velocidad_actual = velocidad_inicial;
		
		for(int num_col = 0 ; num_col < MAX_COL ; num_col++){
			cuadro_velocidad[num_fil][num_col] = velocidad_actual;
			
			if(num_col == 2 && num_fil >= 1){
				if(num_fil == 1){
					velocidad_actual = velocidad_actual + incremento * 2;
				}
				else{
					velocidad_actual = velocidad_actual + incremento * 3;
				}
			}
			else{
				velocidad_actual = velocidad_actual + incremento;
			}
		}
	}
	
	for(int num_fil = 0 ; num_fil < MAX_FIL ; num_fil++){
		for(int num_col = 0 ; num_col < MAX_COL ; num_col++){
			cout << cuadro_velocidad[num_fil][num_col] << " ";
		}
		
		cout << "\n";
	}
}
