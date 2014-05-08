#include <cstdio>
#include <vector>
using namespace std;

/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 2360 - Tetris
*
* A little bit long to implement. Basically the idea here is to create a vector with the number
* of columns, and three vectors that simulates the pieces according to its size and drop (2, 3, or 4 squares area).
* The next step is to check which piece is given, and constructing it with a piece vector, and for the piece given,
* check all the possible positions and if they fix in the Tetris area without leaving a free square
*/

#define ciclo(i, a, b, c) for(i = a ; i < b ; i += c)
int c, piece, i, waysTo = 0;
vector<int> piece1(2, 0), piece2(3, 0), piece3(4, 0);
int iterate(vector<int>, vector<int>);

int main()
{
    scanf("%d %d", &c, &piece);
    vector<int> columns(c); //With the number of columns
    ciclo(i, 0, c, 1) //Read occupied squares
        scanf("%d", &columns[i]);

    switch(piece) //According to the piece given
    {
        case 1: //Piece 1: two ways
            waysTo += c; //default sum of the area of the piece 1 on 90°
            piece3[0] = piece3[1] = piece3[2] = piece3[3] = 1;  //simulating the piece at 180°
            waysTo += iterate(columns, piece3); //get ways to fix the piece in the columns
            break;
        case 2: //Piece 2: one way
            piece1[0] = piece1[1] = 1;
            waysTo += iterate(columns, piece1);
            break;
        case 3: //Piece 3: two ways
            piece2[0] = 1;
            piece2[1] = 0;
            piece2[2] = 0;
            waysTo += iterate(columns, piece2);
            piece1[0] = 0;
            piece1[1] = 1;
            waysTo += iterate(columns, piece1);
            break;
        case 4: //Piece 4: two ways
            piece2[0] = 0;
            piece2[1] = 0;
            piece2[2] = 1;
            waysTo += iterate(columns, piece2);
            piece1[0] = 1;
            piece1[1] = 0;
            waysTo += iterate(columns, piece1);
            break;
        case 5: //Piece 5: four ways
            piece2[0] = 0;
            piece2[1] = 0;
            piece2[2] = 0;
            waysTo += iterate(columns, piece2); // Inverted T
            piece2[0] = 0;
            piece2[1] = 1;
            piece2[2] = 0;
            waysTo += iterate(columns, piece2); // Normal T
            piece1[0] = 0;
            piece1[1] = 1;
            waysTo += iterate(columns, piece1); // Left T
            piece1[0] = 1;
            piece1[1] = 0;
            waysTo += iterate(columns, piece1); // Right T
            break;
        case 6: //Piece 6: four ways
            piece2[0] = 0;
            piece2[1] = 0;
            piece2[2] = 0;
            waysTo += iterate(columns, piece2); // Dropped L
            piece2[0] = 1;
            piece2[1] = 0;
            piece2[2] = 0;
            waysTo += iterate(columns, piece2); // Prone L
            piece1[0] = 1;
            piece1[1] = 1;
            waysTo += iterate(columns, piece1); // Normal L
            piece1[0] = 0;
            piece1[1] = 2;
            waysTo += iterate(columns, piece1); // Inverted L
            break;
        case 7: //Piece 7: four ways
            piece2[0] = 0;
            piece2[1] = 0;
            piece2[2] = 0;
            waysTo += iterate(columns, piece2); // Dropped L
            piece2[0] = 0;
            piece2[1] = 0;
            piece2[2] = 1;
            waysTo += iterate(columns, piece2); // Prone L
            piece1[0] = 1;
            piece1[1] = 1;
            waysTo += iterate(columns, piece1); // Normal L
            piece1[0] = 2;
            piece1[1] = 0;
            waysTo += iterate(columns, piece1); // Left L
            break;
    }
    printf("%d\n", waysTo);
    return 0;
}

int iterate(vector<int> columns, vector<int> piece)
{
    int i, j = 0, cont = 0;
    ciclo(i, 0, columns.size(), 1) //Iterating over the Tetris area
    {
        vector<int> temp = columns;
        if(piece.size() + i > columns.size()) //if we get to the last column
        {
            return cont;
            break;
        }
        if(piece.size() == 2) //For a size-two piece, check if fix in two squares
        {
            temp[i] = piece[j] + temp[i];
            temp[i + 1] = piece[j + 1] + temp[i + 1];
            if(temp[i] == temp[i + 1])
                cont++;
        }
        else if(piece.size() == 3) //For a size-three piece, check if fix in three squares
        {
            temp[i] = piece[j] + temp[i];
            temp[i + 1] = piece[j + 1] + temp[i + 1];
            temp[i + 2] = piece[j + 2] + temp[i + 2];
            if(temp[i] == temp[i + 1] && temp[i + 1] == temp[i + 2])
                cont++;
        }
        else if(piece.size() == 4) //For a size-four piece, check if fix in four squares
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
