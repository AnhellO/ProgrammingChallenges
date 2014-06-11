#include <cstdio>
#include <vector>
using namespace std;
/*
* Autores: Angel Jaime, Santiago Chio (schiob), Luis Angel Salas
* 2360 - Tetris - COJ
*
* Problema mas complicado del concurso, solucion trivial y larga de implementar.
* Basicamente la idea aqui es crear un vector que represente el numero de columnas
* y tres vectores que simulen a las piezas acorde a su tama�o y forma de caida (2, 3, o 4 cuadrados de area).
* El siguiente paso es checar que pieza es dada, construirla con un vector, y para esa pieza dada,
* verificar todas sus posibles posiciones y ver si encajan en el area de Tetris sin dejar ningun cuadrado libre
* El area de Tetris y una pieza seran representados con un 0 para cuadrados vacios, y dependiendo de cuantos cuadrados
* esten ocupados, se utilizaran valores numericos de 1 hasta el ultimo cuadrado ocupado en caso de posiciones verticales,
* y del mismo valor numerico para los cuadrados ocupados en posicion horizontal sin preocuparnos por pasarnos de altura, ya que en el juego
* de Tetris originalmente no pasa nada si te pasas de altura en alguna columna, por ejemplo, tomemos 4 columnas en total:
*
*             |[0][0][0][0]|
*             |[0][0][0][0]|
*             |[0][0][0][0]|
*             |[0][0][0][0]|
* Area Vacia: |[0][0][0][0]|
*
*                                    |[0][0][0][0]|
*                                    |[0][0][0][4]|
*                                    |[3][0][3][3]|
*                                    |[2][2][2][2]|
* Area Ocupada sin cuadrados libres: |[1][1][1][1]|
*
*
*                                    |[0][0][0][0]|
*                                    |[0][0][0][0]|
*                                    |[3][0][0][0]|
*                                    |[2][2][2][2]|
* Area Ocupada con cuadrados libres: |[1][1][1][0]|
*/
int c, piece, i, waysTo = 0;
vector<int> piece1(2, 0), piece2(3, 0), piece3(4, 0);
int iterate(vector<int>, vector<int>);

int main()
{
    scanf("%d %d", &c, &piece); //leer columnas y piezas
    vector<int> columns(c); //se crea vector del tama�o de las columnas
    for(i = 0 ; i < c ; i++) //ciclo para asignar valores iniciales de acuerdo a las columnas ya establecidas
    {
        scanf("%d", &columns[i]);
    }

    switch(piece) //dependiendo la pieza
    {
        case 1: //pieza 1: dos acomodos
            waysTo += c; //se suman por default las permutaciones de la pieza 1 en 90�
            piece3[0] = piece3[1] = piece3[2] = piece3[3] = 1;  //se inicializa vector simulando la pieza a 180�
            waysTo += iterate(columns, piece3); //sumamos valor retornado por el m�todo
            break;
        case 2: //pieza 2: un acomodo
            piece1[0] = piece1[1] = 1;
            waysTo += iterate(columns, piece1);
            break;
        case 3: //pieza 3: dos acomodos
            piece2[0] = 1;
            piece2[1] = 0;
            piece2[2] = 0;
            waysTo += iterate(columns, piece2);
            piece1[0] = 0;
            piece1[1] = 1;
            waysTo += iterate(columns, piece1);
            break;
        case 4: //pieza 4: dos acomodos
            piece2[0] = 0;
            piece2[1] = 0;
            piece2[2] = 1;
            waysTo += iterate(columns, piece2);
            piece1[0] = 1;
            piece1[1] = 0;
            waysTo += iterate(columns, piece1);
            break;
        case 5: //pieza 5: cuatro acomodos
            piece2[0] = 0;
            piece2[1] = 0;
            piece2[2] = 0;
            waysTo += iterate(columns, piece2); // T invertida
            piece2[0] = 0;
            piece2[1] = 1;
            piece2[2] = 0;
            waysTo += iterate(columns, piece2); // T normal
            piece1[0] = 0;
            piece1[1] = 1;
            waysTo += iterate(columns, piece1); // T izquierda
            piece1[0] = 1;
            piece1[1] = 0;
            waysTo += iterate(columns, piece1); // T derecha
            break;
        case 6: //pieza 6: cuatro acomodos
            piece2[0] = 0;
            piece2[1] = 0;
            piece2[2] = 0;
            waysTo += iterate(columns, piece2); // L acostada
            piece2[0] = 1;
            piece2[1] = 0;
            piece2[2] = 0;
            waysTo += iterate(columns, piece2); // L boca-abajo
            piece1[0] = 1;
            piece1[1] = 1;
            waysTo += iterate(columns, piece1); // L normal
            piece1[0] = 0;
            piece1[1] = 2;
            waysTo += iterate(columns, piece1); // L invertida
            break;
        case 7: //pieza 7: cuatro acomodos
            piece2[0] = 0;
            piece2[1] = 0;
            piece2[2] = 0;
            waysTo += iterate(columns, piece2); // L acostada
            piece2[0] = 0;
            piece2[1] = 0;
            piece2[2] = 1;
            waysTo += iterate(columns, piece2); // L boca-abajo
            piece1[0] = 1;
            piece1[1] = 1;
            waysTo += iterate(columns, piece1); // L normal
            piece1[0] = 2;
            piece1[1] = 0;
            waysTo += iterate(columns, piece1); // L izquierda
            break;
    }
    printf("%d\n", waysTo);
    return 0;
}

int iterate(vector<int> columns, vector<int> piece)
{
    int i, j = 0, cont = 0;
    for(i = 0 ; i < columns.size() ; i++) //iniciamos iteraci�n sobre el vector mayor
    {
        vector<int> temp = columns;
        if(piece.size() + i > columns.size()) //si el tama�o de la pieza excede el l�mite de columnas, no iterar
        {
            return cont;
            break;
        }
        if(piece.size() == 2) //si el acomodo de la pieza ocupa dos cuadros
        {
            temp[i] = piece[j] + temp[i];
            temp[i + 1] = piece[j + 1] + temp[i + 1];
            if(temp[i] == temp[i + 1])
                cont++;
        }
        else if(piece.size() == 3) //si el acomodo de la pieza ocupa tres cuadros
        {
            temp[i] = piece[j] + temp[i];
            temp[i + 1] = piece[j + 1] + temp[i + 1];
            temp[i + 2] = piece[j + 2] + temp[i + 2];
            if(temp[i] == temp[i + 1] && temp[i + 1] == temp[i + 2])
                cont++;
        }
        else if(piece.size() == 4) //si el acomodo de la pieza ocupa cuatro cuadros
        {
            temp[i] = piece[j] + temp[i];
            temp[i + 1] = piece[j + 1] + temp[i + 1];
            temp[i + 2] = piece[j + 2] + temp[i + 2];
            temp[i + 3] = piece[j + 3] + temp[i + 3];
            if(temp[i] == temp[i + 1] && temp[i + 1] == temp[i + 2] && temp[i + 2] == temp[i + 3])
                cont++;
        }
    }
    return cont;
}
