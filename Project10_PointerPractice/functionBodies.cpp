#include "header.h"


void valVsRef (double &a, double b)
{
    a += 5;
    b += 5;
}

double gravDist (double a, double t)
{
    return (0.5 * a * t * t);
}

double gravVel (double a, double t)
{
    return (a * t);
}
