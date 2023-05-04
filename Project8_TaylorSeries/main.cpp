#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    //MANDATORY SECTION
    cout << "MANDATORY SECTION: \n\n";
    
    cout << "Please enter a value for x for trigonemetric calculations: ";
    double x;
    cin >> x;
    
    
    cout << "sin(" << x << "): " << sinTaylor(x) << endl;
    cout << "cos(" << x << "): " << cosTaylor(x) << endl;
    
    //OPTIONAL SECTION
    cout << "\nOPTIONAL SECTION: \n\n";
    
    cout << "tan(" << x << "): " << tanTaylor(x) << endl;

    return 0;
}
