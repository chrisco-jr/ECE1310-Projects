//MANDATORY SECTION

#include <iostream>

using namespace std;

int main()
{
    // MANDATORY SECTION
    srand(time(0)); // seeding the random number generator
    
    cout << "Enter 1 for practice multiplication or 2 to practice division:\n";
    int selection;
    cin >> selection;
    
    switch (selection)
    {
        case 1:
            while (true)
            {
                int randNum1 = (1 + rand() % (9-1+1));
                int randNum2 = (1 + rand() % (9-1+1));
                int answer = randNum1 * randNum2;
                
                cout << "What is " << randNum1 << " times " << randNum2 << "?\n";
                int response;
                cin >> response;
                
                while (response != answer)
                {
                    cout << "No. Please Try Again.\n";
                    cin >> response;
                }
                 cout << "Very Good!\n";
            }
        case 2:
            while (true)
            {
                int dividend = (100 + rand() % (9999-100+1));
                int divisor = (1 + rand() % (99-1+1));
                int quotient = dividend / divisor;
                int remainder1 = dividend % divisor;
                
                cout << "What is " << dividend << " divided by " << divisor << "?\n";
                cout << "Enter the quotient: ";
                int resQuotient;
                cin >> resQuotient;
                
                cout << "Enter the remainder: ";
                int resRemainder;
                cin >> resRemainder;
                
                while (resQuotient != quotient || resRemainder != remainder1)
                {
                    cout << "No. Please Try Again.\n";
                    cout << "Quotient: ";
                    cin >> resQuotient;
                
                    cout << "Remainder: ";
                    cin >> resRemainder;
                }
                 cout << "Very Good!\n";
            }
    }
        
    
  

    return 0;
}
