#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 2421 - The Asteroids
*
* Easy and funny problem of geometry, basically, our shuttle will be always on a given (x0, y0)
* coordinates, and there will be N asteroids with a given radius of length r and coordinates of (xi, yi).
* The solution is to find the distance between two points (shuttle and ith asteroid), considering the
* radius of the ith asteroid (it can cover a very big area). And for every asteroid read from the
* input, we get the distance and compare it with some auxiliar variables that store the closest
* asteroid to the shuttle. At the end, we must print the position of the ith asteroid, the closest one
* to the shuttle
*/
double distancePtoP(int x1, int y1, int x2, int y2, int radius)
{
    return (sqrt(pow (x2-x1,2) + pow(y2-y1,2)))-radius; //formula for two given points, considering the radius
}

int main()
{
    int n,xT,yT,xI,yI,radius,minor;
    double d1,d2;
    do
    {
        scanf("%d",&n);
        if(n!=0)
        {
            scanf("%d %d", &xT, &yT);
            d2=0;
            minor=0;
            for(int i=0;i<n;i++)
            {
                scanf("%d %d %d", &xI, &yI, &radius);
                d1=distancePtoP(xT,yT,xI,yI,radius);
                if(i<1) //For the first case both distance will be the same
                {
                    d2=d1;
                }
                if(d1<d2) //In case that the new distance is closer...
                {
                    minor = i; //...we get the position of the new asteroid
                    d2=d1; //and we assign the distance to compare
                }
            }
            printf("%d\n",minor+1);
        }
        else
            break;
    }while(n!=0);
    return 0;
}
