#include "header.h"
#include <cmath>

int drawCard()
{
    return (1+ rand()%10-1+1);
}

bool isWinner(bool pBust, bool dBust, int pTotal, int dTotal)
{
    if (pBust)
    {
        return false;
    }
    else if (dBust)
    {
        return true;
    }
    else
    {
        return (pTotal > dTotal);   
    }
    
    return true;
}
