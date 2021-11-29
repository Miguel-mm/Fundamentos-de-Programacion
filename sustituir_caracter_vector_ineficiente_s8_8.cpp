
#include <iostream>
using namespace std;

int main(){
	const char TERMINADOR = '#';
	const int TAMANIO = 100;
	char caracter, a_borrar;
	char v[TAMANIO], nuevo[TAMANIO];
	int v_util = 0;
	int nuevo_util = 0;
	int contador_vector = 0;
	
	cout << "Vector ---> ";
	cin >> caracter;
	
	while(caracter != TERMINADOR){
		nuevo[nuevo_util] = caracter;
		nuevo_util++;
		
		cout << "Vector ---> ";
		cin >> caracter;
	}
	
	cout << "Vector nuevo ---> ";
	cin >> caracter;
	
	while(caracter != TERMINADOR){
		nuevo[nuevo_util] = caracter;
		nuevo_util++;
		
		cout << "Vector nuevo ---> ";
		cin >> caracter;
	}
	
	cout << "Caracter que desea borrar ---> ";
	cin >> a_borrar;
	
	while(contador_vector != v_util){
		if(v[contador_vector] == a_borrar){
			for(int i = contador_vector; i < v_util; i++)
				v[i] = v[i + 1];
				v_util = v_util - 1;
			 
			for(int i = v_util; i >= contador_vector; i++)
				v[i + nuevo_util] = v[i];
				
			for(int i = 0; i < nuevo_util; i++)
				v[i + contador_vector] = nuevo[i];
				
			v_util = nuevo_util + 1;
			contador_vector = nuevo_util + 1;
		}
		else
			contador_vector++;
	}
}
	

