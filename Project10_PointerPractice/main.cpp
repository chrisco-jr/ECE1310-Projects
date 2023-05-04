#include <iostream>
#include <iomanip>
#include <cmath>
#include "header.h"

using namespace std;

int main()
{
    cout << "MANDATORY SECTION\n\n";
    int i1 = 5;
    int i2 = 10;
    double d1 = 100.789;
    double d2 = 500.678;
    
    int * iPtr = &i1;
    double * dPtr = &d1;
    
    cout << "(a) Pointer Values: \n";
    cout << "i1Address: " << iPtr << endl;
    cout << "d1Address: " << dPtr << endl << endl;
    
    cout << "(b) Pointer Values (& operator): \n";
    cout << "i1Address: " << &i1 << endl;
    cout << "d1Address: " << &d1 << endl << endl;
    
    cout << "(c) Value Print Out (direct): \n";
    cout << "i1Value: " << i1 << endl;
    cout << "d1Value: " << d1 << endl << endl;

    cout << "(d) Value Print Out (indirect): \n";
    cout << "i1Value: " << *iPtr << endl;
    cout << "d1Value: " << *dPtr << endl << endl;
    
    cout << "(e) Value Change (indirect): \n";
    *iPtr += 100;
    *dPtr -= 50.5;
    cout << "i1ValueUpdated: " << i1 << endl;
    cout << "d1ValueUpdated: " << d1 << endl << endl;
    
    cout << "(f) Value Print Out (direct): \n";
    cout << "i2Value: " << i2 << endl;
    cout << "d2Value: " << d2 << endl << endl;
    
    cout << "(g) Pointer Change and Indirect Value Print Out: \n";
    iPtr = &i2;
    dPtr = &d2;
    cout << "iPtrUpdated: " << iPtr << endl;
    cout << "dPtrUpdated: " << dPtr << endl;
    cout << "iPtrValueUpdated: " << *iPtr << endl;
    cout << "dPtrValueUpdated: " << *dPtr << endl << endl;
    
    //OPTIONAL SECTION 1
    cout << "\nOPTIONAL SECTION 1 (Gravity Simulation w/ Functions)\n\n";
    const double acceleration = 9.806;
    
    //Initialization and User Input
    double timeInSecs;
    double stepSizeInSecs;
    double currentTime = 0;
    
    cout << "Enter the time in seconds: ";
    cin >> timeInSecs;
    cout << "Enter the step-size in seconds: ";
    cin >> stepSizeInSecs;
    
    int stepCount = ceil(timeInSecs / stepSizeInSecs);
    //cout << stepCount << endl;
    cout << fixed << setprecision(4);
    
    //for loop calculations (now with functions)
    for (int i = 0; i <= stepCount; i++ )
    {
        cout << "t: " << currentTime << " sec\t";
        double x = gravDist(acceleration, currentTime);
        cout << "x: " << x << " m\t";
        double v = gravVel(acceleration, currentTime);
        cout << "v: " << v << " m/s\t\n";
        currentTime += stepSizeInSecs;
    }
    
    
    // OPTIONAL SECTION 2
    cout << "\n\nOPTIONAL SECTION 2 (Pass by Reference vs. Pass by Value)\n\n";
    
    double num1 = 12.5;
    double num2 = 12.5;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl << endl;
    valVsRef(num1, num2);
    cout << "Post-Function Values (add 5 to each within function):\n";
    cout << "num1 (Pass by Reference): " << num1 << endl;
    cout << "num2 (Pass by Value): " << num2 << endl;

    return 0;
}
