#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //MANDATORY SECTION
    cout << "MANDATORY SECTION\n";
    
    double a;
    double b;
    double c;
    
    cout << "Enter three doubles (a,b,c) in the form ax^2 + bx + c = 0\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    
    //Solve for quadratic
    double num1 = -b + sqrt(b*b - 4 * a * c);
    double num2 = -b - sqrt(b*b - 4 * a * c);
    double denum = 2 * a;
    
    double root1 = num1/denum;
    double root2 = num2/denum;
    
    cout << "Roots for given values: " << root1 << ", " << root2;
    
    cout << "\n\n";
    
    //OPTIONAL SECTION 1
    cout << "OPTIONAL SECTION 1\n";
    
    cout << "Enter value for angular frequency in solving absolute value of a complex voltage: ";
    double omega;
    cin >> omega;
    
    double numO1 = 100 * omega;
    double denumO1 = sqrt(1 + (5.0e-10) * omega * omega);
    double resultO1 = numO1 / denumO1;
    
    cout << "Result: " << setprecision(8) << fixed << resultO1;
    
    cout << "\n\n";
    
    //OPTIONAL SECTION 2
    cout << "OPTIONAL SECTION 2\n";
    
    const double pi = 3.141592653589793238;
    double t;
    
    cout << "Enter a value for t (time) to solve another voltage equation: ";
    cin >> t;
    
    double resultO2 = exp(-t) * cos(2 * pi * 1000 * t);
    
    cout << "Result: " << setprecision(8) << fixed << resultO2;
    
    
    return 0;
}
