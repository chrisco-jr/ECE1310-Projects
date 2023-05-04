#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


const double acceleration = 9.806;
int main()
{
    
    //MANDATORY SECTION
    cout << "MANDATORY SECTION\n";
    
    //Initialization and User Input
    double timeInSecs;
    double stepSizeInSecs;
    double currentTime = 0;
    
    cout << "Enter the time in seconds: ";
    cin >> timeInSecs;
    cout << "Enter the step-size in seconds: ";
    cin >> stepSizeInSecs;
    
    int stepCount = ceil(timeInSecs / stepSizeInSecs);
    cout << stepCount << endl;
    
    cout << fixed << setprecision(4);
    //for loop calculations
    for (int i = 0; i <= stepCount; i++ )
    {
        cout << "t: " << currentTime << " sec\t";
        double x = 0.5 * acceleration * currentTime * currentTime;
        cout << "x: " <<  x << " m\t";
        double v = acceleration * currentTime;
        cout << "v: " <<  v << " m/s\t\n";
        currentTime += stepSizeInSecs;
    }
    
    //OPTIONAL SECTION
    cout << "\nOPTIONAL SECTION\n";
    
    cout << "Enter an integer: ";
    int sizeOfTable;
    cin >> sizeOfTable;
    
    for (int i = 1; i <= sizeOfTable; i++)
    {
        for (int j = 1; j <= sizeOfTable; j++)
        {
            cout << (i*j) << "\t";
        }
        cout << endl;
    }
    
    return 0;
}
