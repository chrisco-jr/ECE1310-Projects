#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // MANDATORY SECTION
    cout << "MANDATORY SECTION\n";

    //ask for passenger count, for every passenger prompt for destination, class
    
    cout << "Enter the number of passengers on the flight: ";
    int passengers;
    cin >> passengers;
    
    int numPassengersMiami = 0;
    int numPassengersLA = 0;
    
    for (int i = 1; i <= passengers; i++)
    {
        cout << "Please enter a destination number for passenger " << i << endl;
        cout << "(1 for Miami, 2 for LA)\n";
        int destination;
        cin >> destination;
        if (destination == 1) 
        {
            cout << "Miami has been selected, please select a class (3, 4, 5)\n";
            int fClass;
            cin >> fClass;
            switch (fClass)
            {
                case 3:
                case 4:
                case 5:
                cout << "Passenger #" << i << " booked for Miami in class " << fClass << endl << endl;
                numPassengersMiami++;
                break;
                
                default:
                cout << "Sorry this ticket is invalid, flight has not been booked\n\n";
            }
        }
        else if (destination == 2)
        {
            cout << "Los Angeles has been selected, please select a class (3, 4, 5)\n";
            int fClass;
            cin >> fClass;
            switch (fClass)
            {
                case 3:
                case 4:
                case 5:
                cout << "Passenger #" << i << " booked for Los Angeles in class " << fClass << endl << endl;
                numPassengersLA++;
                break;
                
                default:
                cout << "Sorry this ticket class is invalid, flight has not been booked\n\n";
            }
        }
        else
        {
            cout << "Sorry, a valid destination has not been selected, flight has not been booked\n\n";
        }
        
    }
    cout << "Summary:\n" << numPassengersMiami << " passenger(s) have been successfully booked to Miami\n";
    cout << numPassengersLA << " passenger(s) have been successfully booked to Los Angeles\n";
    
    
    
    
    
    // OPTIONAL SECTION 1
    double const pi = 3.141592653589793238462643383279502884;
    cout << "\n\nOPTIONAL SECTION 1 Voltage Signal to Noise\n";
    
    cout << "Enter an epsilon value: ";
    double epsilon;
    cin >> epsilon;
    
    double result;
    
    if (epsilon <= 1.6755)
    {
        result = (pow(1.0, 0.5)) * (pow((pi/(4-pi)), 0.5));
        result *= ( (pow(epsilon, 2) / 4) - (pow(epsilon, 4)/64) + (pow(epsilon, 6)/768) );
    
    }
    
    else
    {
        result = (pow(1.0, 0.5)) * (pow((2.0/(4-pi)), 0.5));
        double multiply = epsilon - pow((pi/2), 0.5) + 1/(2*epsilon) + 1/(8 * pow(epsilon,3)) + 3/(16 * pow(epsilon,5));
        result *= multiply;
    }
    
    cout << setprecision(20) << "SNRv = " << result;
    
    
    
    
    
    // OPTIONAL SECTION 2
    cout << "\n\nOPTIONAL SECTION 2\n";
    
    cout << "Enter an integer x term for e^x: ";
    int xExponent;
    cin >> xExponent;
    
    double eX = 0;
    int termCount = 0;
    double eXTermAdded = 999;
    double termThreshold = pow(10, -12);
    
    while (eXTermAdded > termThreshold)
    {
        //calculate factorial of denominator
        double factorialDenum = 1;
        
        for (int i = termCount; i > 0; i--)
        {
            factorialDenum *= i;
        }
        
        eXTermAdded = (pow(xExponent, termCount)) / factorialDenum;
        eX += eXTermAdded;
        termCount++;
    }
    termCount--; // decrement accounts for extra increment added to variable when reaching termThreshold;
    
    cout << "e raised to a power of " << xExponent << ": " << setprecision (20) << eX << endl;
    cout << "The number of terms used to calculate this number is: " << termCount << endl;
    cout << "Term Addition ends upon reaching value of: " << setprecision (2) << scientific << eXTermAdded;
    return 0;

}
