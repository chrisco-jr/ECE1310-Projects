#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //MANDATORY SECTION
    cout << "MANDATORY SECTION \n\n";
    
    int rectOrPolar;
    cout << "Convert to rectangular (1), or polar (2) form " << endl;
    cin >> rectOrPolar;
    if (rectOrPolar == 1)
    {
        //run rectangular to polar prompts and conversions
        cout << "Enter an A value: ";
        double aPolar;
        cin >> aPolar;
        cout << "Enter a theta value: ";
        double thetaPolar;
        cin >> thetaPolar;
        
        double aRect = aPolar * cos(thetaPolar);
        double bRect = aPolar * sin(thetaPolar);
        
        cout << aPolar << "exp(j" << thetaPolar << ") is equal to " << aRect << "+j" << bRect;
        
        
    }
    
    else if (rectOrPolar == 2)
    {
        //run polar to rectangular prompts and conversion conversion
        cout << "Enter an a value: ";
        double aRect;
        cin >> aRect;
        cout << "Enter a b value: ";
        double bRect;
        cin >> bRect;
        
        double aPolar = sqrt(aRect * aRect + bRect * bRect);
        double thetaPolar = atan2(bRect, aRect);
        
        cout << aRect << "+j" << bRect << " is equal to " << aPolar << "exp(j" << thetaPolar << ")";
        
    }
    
    //OPTIONAL SECTION 1
    cout << "\n\nOPTIONAL SECTION 1 \n\n";
    
    cout << "Enter two different complex numbers in form (a + jb) and (c + jd)" << endl;
    double a;
    double b;
    double c;
    double d;
    
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "d: ";
    cin >> d;
    
    double multi1 = (a*c) - (b*d);
    double multi2 = (a*d) + (b*c);

    cout << "Addition: (" << a << " + j" << b << ") + (" << c << " + j" << d << ") = (" << (a + c) << " + j" << (b + d) << ")" << endl;
    cout << "Multiplication: (" << a << " + j" << b << ")(" << c << " + j" << d << ") = (" << multi1 << " + j" << multi2 << ")" << endl;
    
    
    
    
    return 0;
}
