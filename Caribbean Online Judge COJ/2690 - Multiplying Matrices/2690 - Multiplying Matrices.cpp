#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;
/*
* Autor: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 2690 - Multiplying Matrices
*
* De acuerdo a la teor�a de la multiplicaci�n de matrices:
* Dos matrices A y B son multiplicables si el n�mero de columnas de A coincide con el n�mero de filas de B.
* ----> M[m x n] x M[n x p] = M [m x p]
* El elemento cij de la matriz producto se obtiene multiplicando cada elemento de la fila i de la matriz A
* por cada elemento de la columna j de la matriz B y sum�ndolos.
*/
int N, M, R, C, i, j, k, sum;

int main()
{
	scanf("%d %d", &N, &M); //Tama�o y llenado de la matriz A
	int matrix1[N][M];
	FOR(i, 0, N, 1)
		FOR(j, 0, M, 1)
			scanf("%d", &matrix1[i][j]);
	scanf("%d %d", &R, &C); //Leemos el tama�o de la segunda matriz
	if(M != R) //y validamos si el n�mero de columnas de la matriz A no coincide con el n�mero de filas de B,
                //dando como resultado que no se puede realizar la multiplicaci�n de matrices
		printf("The matrices can not be multiplied\n");
	else //Pero si se puede realizar.....
	{
		int matrix2[R][C]; //Crea y llena la matriz B
		FOR(i, 0, R, 1)
			FOR(j, 0, C, 1)
				scanf("%d", &matrix2[i][j]);
		FOR(i, 0, N, 1) //Para cada una de las filas de la matriz A
		{
			FOR(j, 0, C, 1) //Y para cada una de las columnas de la matriz B
			{
				sum = 0;
				FOR(k, 0, M, 1) //Multiplica el i�simo elemento de la fila actual de matriz A con el i�simo de la matriz B
				{
					sum += (matrix1[i][k] * matrix2[k][j]); //Se almacenan en la suma
				}
				(j < C - 1) ? printf("%d ", sum) : printf("%d\n", sum); //Directamente mandamos a imprimir el resultado de la i�sima multiplicaci�n
			}
		}
	}
	return 0;
}
