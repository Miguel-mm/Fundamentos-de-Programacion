#include <iostream>
using namespace std;

int main(){
   const int MAX_FIL = 10, MAX_COL = 10;
   double matriz[MAX_FIL][MAX_COL];
   double traspuesta[MAX_COL][MAX_FIL];
   int util_filas, util_columnas;

   cin >> util_filas;
   cin >> util_columnas;

   for (int i=0; i<util_filas; i++)
      for (int j=0; j<util_columnas; j++)
         cin >> matriz[i][j];

   int util_fil_traspuesta, util_col_traspuesta;
   
   util_fil_traspuesta = util_columnas;
   util_col_traspuesta = util_filas;
   
   for (int i=0; i<util_fil_traspuesta; i++)
      for (int j=0; j<util_col_traspuesta; j++)
         traspuesta[i][j] = matriz[j][i];
   
   cout << "\n\n";
   cout << "Matriz original:\n";

   for (int i=0; i<util_filas; i++){
      cout << "\n";

      for (int j=0; j<util_columnas; j++)
         cout << matriz[i][j] << '\t';
   }
   
   cout << "\n\n";
   cout << "Matriz traspuesta:\n";   
    
   for (int i=0; i<util_fil_traspuesta; i++){
      cout << "\n";
      
      for (int j=0; j<util_col_traspuesta; j++)
         cout << traspuesta[i][j] << '\t';
   }  
}
