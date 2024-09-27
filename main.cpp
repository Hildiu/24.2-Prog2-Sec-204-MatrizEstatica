/*------------------------------------------------------
 * Dato de entrada:  12 numeros int
 * Dato de Salida:  matriz, elMenor elemento de la matriz
 --------------------------------------------------------*/
#include <iostream>
#include <iomanip>
using namespace std;

void imprimirMatriz( int mat[][4], int filas, int col);
int elMenor(int  mat[][4], int filas, int col );


int main()
{
    int mat[3][4];

//---- leemos datos desde el teclado hacia la matriz
for(int f=0; f<3;f++)
    for(int c=0; c<4; c++)
    {
        cout << "mat[" << f << "][" << c << "]= ";
        cin >> mat[f][c];
    }
imprimirMatriz(mat, 3, 4);
cout << "\n";
cout << "El dato menor de la matriz es: " << elMenor(mat, 3, 4);
return 0;
}


void imprimirMatriz( int mat[][4], int filas, int col)
{
    for(int f=0; f<filas; f++)
    {
        for(int c=0; c<col; c++)
            cout << setw(4) << mat[f][c];
        cout << "\n";
    }
}


int elMenor(int  mat[][4], int filas, int col )
{
   int menor = mat[0][0];

   for(int f=0; f<filas; f++)
       for(int c=0; c<col; c++)
           if( mat[f][c] < menor)
               menor = mat[f][c];
   return menor;
}