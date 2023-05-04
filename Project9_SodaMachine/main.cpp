#include <iostream>
#include "header.h"
extern const int sodaCost = 75;

using namespace std;

int main()
{
    
    enum States {ENTER, SELECT, INVENTORY, RETURN};
    
    int state = ENTER;
    int total = 0;
    int pepsiInv = 2;
    int cokeInv = 2;
    int drink;
    
    cout << "Welcome to the Soda Machine. Options are Pepsi and Coke." << endl;
    
    while (true)
    {
                
        switch (state)
        {
            case ENTER:
            {
                cout << "Please insert coins to select a drink (0 to Return to Start): ";
                while (total < sodaCost)
                {
                    int coinInsert;
                    cin >> coinInsert;
                    total += coinInsert;
                    cout << "Total: " << total << endl;
                    if (coinInsert == 0)
                    {
                        state = RETURN;

                        break;
                    }
                }
                if (total >= sodaCost)
                {
                    change(total);
                    state = SELECT;
                    total = 0;
                }
                break;
            }
            
            
            case SELECT:
            {
                cout << "Please select a drink (1 for Pepsi, 2 for Coke, 0 to Return): ";
                cin >> drink;
                if (drink == 0)
                {
                    total += sodaCost*2;
                    state = RETURN;
                }
                else if (drink == 1 || drink == 2)
                {
                    state = INVENTORY;
                }
                else
                {
                    cout << "That is an invalid choice, select again.\n";
                    state = SELECT;
                }
                break;
            }
            case INVENTORY:
            {
                
                if (pepsiInv == 0 && cokeInv == 0)
                {
                    cout << "All sold out.\n";
                    total += sodaCost*2;
                    state = RETURN; 
                }
                else if (drink == 1 && pepsiInv > 0)
                {
                    cout << "\nDispensing Pepsi. Please check the lower compartment to receive your drink.\n";
                    pepsiInv--;
                    state = ENTER;
                }
                else if (drink == 2 && cokeInv > 0)
                {
                    cout << "\nDispensing Coke. Please check the lower compartment to receive your drink.\n";
                    cokeInv--;
                    state = ENTER;
                }
                else 
                {
                    cout << "\nSold out of your selection\n";
                    state = SELECT;
                }
                break;

            }
            
            case RETURN:
            {
                change(total);
                total = 0;
                state = ENTER;
                break;
            }
        }
        
    }
    return 0;
}
