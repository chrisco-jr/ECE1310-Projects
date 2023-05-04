#include <iostream>

using namespace std;

int main()
{
    // OPTIONAL SECTION
    srand(time(0)); // seeding the random number generator
    int flipCount;
    cout << "How many coin flips would you like to perform?\n";
    cin >> flipCount;
    
    int heads = 0;
    int tails = 0;
    
    for (int i = 0; i < flipCount; i++)
    {
        int result = rand() % 2;
        //cout << result;
        if (result == 0)
        {
            heads++;
        }
        else
        {
            tails++;
        }
    }
    
    double pHeads = ((double)heads / flipCount) * 100;
    double pTails = ((double)tails / flipCount) * 100;
    
    cout << "%Heads: " << pHeads << "%\n";
    cout << "%Tails: " << pTails << "%\n";

    return 0;
}
