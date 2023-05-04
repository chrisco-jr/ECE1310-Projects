#include <iostream>
#include "header.h"
extern const int sodaCost;

using namespace std;

void change (int total)
{
    if (total > 0 && total < sodaCost)
    {
        cout << "Issuing change of " << total << " cents\n\n";
    }
    
    else if (total > sodaCost)
    {
        int coinsLeft = total - sodaCost;
        cout << "Issuing change of " << coinsLeft << " cents\n\n";
    }
}
