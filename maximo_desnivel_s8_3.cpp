// Máximo desnivel

#include <iostream>
using namespace std;

int main(){
	int tope_alturas, tope_desniveles, maximo_desnivel;
	int desnivel_acumulado;
	
	
	cout << "Introduzca el número de alturas a introducir: ";
	cin >> tope_alturas;
	
	tope_desniveles = tope_alturas - 1;
			
	int alturas[tope_alturas];
	int desniveles[tope_desniveles];
			
	for(int i = 0 ; i < tope_alturas ; i++){
		cout << "Introduzca la altura: ";
		cin >> alturas[i];
	}
		
	if (tope_alturas > 1){
			desnivel_acumulado = 0;
		
		for(int i = 0 ; i < tope_desniveles ; i++){
			desniveles[i] = alturas[i + 1] - alturas[i];
			if (desniveles[i] > 0)
				desnivel_acumulado = desnivel_acumulado + desniveles[i];
		}
		
		if (desnivel_acumulado < 0)
			desnivel_acumulado = 0;
			
		maximo_desnivel = abs(desniveles[0]);
		
		for(int i = 1 ; i < tope_desniveles ; i++)
			if (abs(desniveles[i]) > maximo_desnivel)
				maximo_desnivel = abs(desniveles[i]);
		
		cout << maximo_desnivel << " " << desnivel_acumulado;
	}
	else{
		cout << "\nNo hay datos suficientes";
	}
}
