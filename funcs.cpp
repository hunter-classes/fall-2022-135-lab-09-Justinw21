#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include <cmath>

//Task A
double length(Coord3D *p)
{
    double sum;
    double first = p -> x;
    double second = p -> y;
    double third = p -> z;
    sum = pow(first, 2) + pow(second, 2) + pow(third, 2);
    return sqrt(sum);
}

//Task B
Coord3D *fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
    double sumP1 = length(p1);
    double sumP2 = length(p2);

    if(sumP1 < sumP2)
    {
        return p2;
    }
    else
    {
        return p1;
    }
}

//Task C
void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
    ppos -> x += pvel -> x * dt;
    ppos -> y += pvel -> y * dt;
    ppos -> z += pvel -> z * dt;
}

//Task D
Coord3D *createCoord3D(double x, double y, double z)
{
    Coord3D *result = new Coord3D;
    Coord3D value = {x, y, z};
    *result = value;
    return result;
}

void deleteCoord3D(Coord3D *p)
{
    delete p;
}


