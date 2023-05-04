#include <iostream>

using namespace std;

int main()
{
    //MANDATORY SECTION
    cout << "MANDATORY SECTION\n";
    
    //User Setup / IO
    int resistorCount;
    cout << "Enter the amount of resistors in the network: ";
    cin >> resistorCount;
    int serOrPar;
    cout << "Enter 1 for a network in parallel or 2 for a network in series: ";
    cin >> serOrPar;
    
    double equivRes = 0;
    
    //series network calculation
    if (serOrPar == 2)
    {
      int loopCount = 0;
        while(loopCount < resistorCount)  
        {
            cout << "Enter resistor value: ";
            double temp;
            cin >> temp;
            equivRes += temp;
            loopCount++;
        }
    }
    //parallel network calculation
    else if (serOrPar == 1)
    {
        int loopCount = 0;
            while(loopCount < resistorCount)
            {
                cout << "Enter resistor value: ";
                double temp;
                cin >> temp;
                equivRes += (1/temp);
                loopCount++;
            }   
        equivRes = 1/equivRes;
    }
    
    cout << "Equivalent Resistance of Network: " << equivRes << endl;
   
    
    //OPTIONAL SECTION
    cout << "\n\nOPTIONAL SECTION\n";
    
    cout << "Enter a double to raise: ";
    double base;
    cin >> base;
    
    cout << "Enter the integer to raise the double to: ";
    int power;
    cin >> power;
    
    double result = 1;
    if (power == 0)
    {
        result = 1;
    }
    else if (power > 0)
    {
        int counter = 0;
        while (counter < power)
        {
            result *= base;
            counter++;
        }
    }
    else if (power < 0)
    {
        int counter = 0;
        while (counter < abs(power))
        {
            result *= base;
            counter++;
        }
        result = 1/result;
    }
    
    cout << "Result: " << result << endl;
    
    return 0;
}
