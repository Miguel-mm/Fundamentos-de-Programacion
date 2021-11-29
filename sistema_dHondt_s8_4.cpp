
#include<iostream>
using namespace std;


int main(){
	setlocale ( LC_ALL , "spanish" ) ;
	
	int votos[50], escanios, escanios_obtenidos[50], denominador, partidos ;
	int cociente[50], cociente_max, partido_max, i, j ;
	
	cout << " Número de partidos : " ;
	cin >> partidos ;
	cout << " Número de escaños : " ;
	cin >> escanios ;
	
	
	for (i = 0 ; i < partidos ; i++){
		cout << " Votos del partido " << i + 1 << " : " ;
		cin >> votos[i] ;
	}
	
	
	for (i = 0 ; i < partidos ; i++){
		escanios_obtenidos[i] = 0 ;
	}
	
	
	for (i = 0 ; i < escanios ; i++){
		cociente_max = 0 ;
		
		for (j = 0 ; j < partidos ; j++){
			denominador = escanios_obtenidos[j] + 1 ;
			cociente[j] = (votos[j] / denominador);
			if (cociente[j] > cociente_max){
				cociente_max = cociente[j] ;
				partido_max = j  ;
			}
		}
		escanios_obtenidos[partido_max]++;
	}
	
	cout << " Escaños de los partidos, en orden : \n" ;
	
	
	for (i = 0 ; i < partidos ; i++){
		cout << escanios_obtenidos[i] << " " ;
	}


}

