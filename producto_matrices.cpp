// Producto de matrices

#include <iostream>
using namespace std;

int main(){
   const int MAX_FIL_IZDA = 10, MAX_COL = 10;
   const int MAX_FIL_DCHA = MAX_COL, MAX_COL_DCHA = 30;
   
   int util_filas_izda, util_columnas_izda;
   int util_filas_dcha, util_columnas_dcha;
   int util_filas_producto, util_columnas_producto;
   
   double matriz_izda[MAX_FIL_IZDA][MAX_COL];
   double matriz_dcha[MAX_FIL_DCHA][MAX_COL_DCHA];
   double matriz_producto[MAX_FIL_IZDA][MAX_COL_DCHA];

   cin >> util_filas_izda;
   cin >> util_columnas_izda;

   for (int i = 0; i < util_filas_izda; i++)
      for (int j = 0; j < util_columnas_izda; j++)
         cin >> matriz_izda[i][j];

   util_filas_dcha = util_columnas_izda;
   cin >> util_columnas_dcha;

   for (int i = 0; i < util_filas_dcha; i++)
      for (int j = 0; j < util_columnas_dcha; j++)
         cin >> matriz_dcha[i][j];
         

   util_filas_producto = util_filas_izda;
   util_columnas_producto = util_columnas_dcha;
   
   for (int i = 0; i < util_filas_producto; i++)
      for (int j = 0; j < util_columnas_producto; j++){
         matriz_producto[i][j] = 0;
         
         for (int k = 0; k < util_columnas_producto; k++)
            matriz_producto[i][j] = matriz_producto[i][j] +
                                    matriz_izda[i][k] * matriz_dcha[k][j];
   }
 
   cout << "\n\n";
   cout << "Matriz producto:\n";
   
   for (int i=0; i<util_filas_producto; i++){
      cout << "\n";
      
      for (int j=0; j<util_columnas_producto; j++)
         cout << matriz_producto[i][j] << '\t';
   }  
  
   cout << "\n\n";

   // 3 4    9 7 4 5    2 18 2 12    7 9 1 5      2      1 2   3 4   5 6   7 8
}
