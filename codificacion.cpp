// Login automático

#include <iostream>
using namespace std;

int main(){
   const char TERMINADOR = '>';
   char caracter;
   string a_codificar, codificada;
   int num_caracteres_a_coger;
   
   cout << "Login.\nIntroduzca la secuencia de caracteres a codificar. ";
   cout << TERMINADOR << " para terminar."
        << "\nA continuación introduzca un entero (número de caracteres a coger)\n\n";
   
   caracter = cin.get();
   
   while (caracter != TERMINADOR){
      a_codificar.push_back(caracter);
      caracter = cin.get();
   }
   
   cin >> num_caracteres_a_coger;

   int utilizados = a_codificar.size();
   int aniadidos = 0;

   for(int actual = 0; actual < utilizados; actual++){
      if (a_codificar[actual] == ' ')
         aniadidos = 0;
      else if (aniadidos < num_caracteres_a_coger){
         codificada.push_back(tolower(a_codificar[actual]));
         aniadidos++;
      }
   }
   
   cout << "\n\nCadena codificada: " << "<" << codificada << ">";
   cout << "\n\n";
   
   // Codillo  Ificante  Carlos>3
}
