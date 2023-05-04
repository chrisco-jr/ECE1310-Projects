#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // MANDATORY SECTION
    cout << "MANDATORY SECTION\n";
    
    int countCap;
    cout << "Enter the amount of numbers to find the sample mean and variance of: ";
    cin >> countCap;
    
    double xBar = 0;
    
    // Calculate xBar
    for (int count = 0; count < countCap; count++)
    {
        cout << "Enter value " << count + 1 << ": ";
        int temp;
        cin >> temp;
        xBar += temp;
    }
    xBar /= countCap;
    cout << "Sample mean is: " << xBar << endl << endl;
    
    // Calculate variance;
    cout << "Reenter values for variance: \n";
    double variance = 0;
    for (int count = 0; count < countCap; count++)
    {
        cout << "Enter value " << count + 1 << ": ";
        int temp;
        cin >> temp;
        variance += pow((temp - xBar), 2);
    }
    variance /= countCap - 1;
    cout << "The variance is: " << variance << endl;

    
    // OPTIONAL SECTION
    cout << "\n\nOPTIONAL SECTION 1\n";
    cout << "Enter integer to find factorial of: ";
    int userNum;
    cin >> userNum;
    
    int factorial = 1;
    for (int i = userNum; i > 1; i--)
    {
        factorial *= i;
    }
    
    cout << "The factorial of " << userNum << " is " << factorial;

    return 0;
}
