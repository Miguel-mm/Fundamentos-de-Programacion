// top_k: Calcula los k mayores valores de un vector - versión ineficiente -

#include <iostream>
using namespace std;

int main(){
   const int TERMINADOR = -1;
   int dato;
   const int TAMANIO                 =  1e6;
   int vector[TAMANIO], topk[TAMANIO];
   int utilizados_vector, k;

   cout << "Topk.\n\n"
        << "Introduzca enteros con terminador "
        << TERMINADOR << "\n"
        << "Luego introduzca el valor de k.\n\n";
        
   utilizados_vector = 0;
   cin >> dato;

   while (dato != TERMINADOR && utilizados_vector < TAMANIO){
      vector[utilizados_vector] = dato;
      utilizados_vector++;
      cin >> dato;
   }
   
   cin >> k;

   for (int i = 0; i < utilizados_vector; i++)
      topk[i] = vector[i];
   
   int izda;
   double a_insertar;

   for (izda = 1; izda < utilizados_vector; izda++){
      a_insertar = topk[izda];
      int j;
      
      for (j = izda; j > 0 && a_insertar > topk[j-1]; j--)   // Ordenación de mayor a menor
         topk[j] = topk[j-1];

      topk[j] = a_insertar;
   }
   
   for (int i = 0; i < k; i++){
      cout << topk[i] << " ";
   }
}
   


