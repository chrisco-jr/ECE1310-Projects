#include <iostream>

using namespace std;

int main()
{
    // MANDATORY SECTION
    cout << "MANDATORY SECTION" << endl;
    cout << "Enter an integer (i1) : ";
    int i1;
    cin >> i1;
    
    cout << "Enter another integer (i2): ";
    int i2;
    cin >> i2;
    
    cout << "i1 + i2 = " << i1 + i2 << endl;
    cout << "i1 - i2 = " << i1 - i2 << endl;
    cout << "i2 - i1 = " << i2 - i1 << endl;
    
    cout << "i1 * i2 = " << i1 * i2 << endl;
    
    cout << "i1 / i2 = " << (double) i1 / i2 << endl;
    cout << "i2 / i1 = " << (double) i2 / i1 << endl;
    
    cout << "i1 modulo i2 = " << i1 % i2 << endl;
    cout << "i2 modulo i1 = " << i2 % i1 << endl;
    
    if (i1 == i2) 
    {
        cout << "i1 and i2 are equal" << endl;    
    }
    else if (i1 > i2)
    {
        cout << "i1 is greater than i2" << endl;
    }
    else 
    {
        cout << "i2 is greater than i1" << endl;    
    }
    cout << "\n\n";
    
    //OPTIONAL SECTION
    cout << "OPTIONAL SECTION" << endl;
    cout << "The size of a short int is " << sizeof(short) << " bytes" << endl;
    cout << "The size of an int is " << sizeof(int) << " bytes" << endl;
    cout << "The size of a long int is " << sizeof(long int) << " bytes" << endl;
    cout << "The size of a char is " << sizeof(char) << " bytes" << endl;
    cout << "The size of a float is " << sizeof(float) << " bytes" << endl;
    cout << "The size of a double is " << sizeof(double) << " bytes" << endl;
    
    return 0;
}
