#include "header.h"
using namespace std;

double myFact(int n)
{
    double sum = 1;
    while (n > 1)
    {
        sum *= n--;
    }
    return sum;
    
}

double sinTaylor(double x)
{
    double threshold = pow(10, -3);
    int n = 0;
    double sum = 0;
    while (true)
    {
        double termAdded = ((pow(-1, n)) / myFact(2 * n + 1)) * (pow(x, 2 * n + 1));
        
        sum += termAdded;
        
        //cout << termAdded << endl;
        //cout << abs(termAdded) << endl;
        
        if (abs(termAdded) < threshold) {break;}
        n++;
    }
    return sum;
}

double cosTaylor(double x)
{
    double threshold = pow(10, -3);
    int n = 0;
    double sum = 0;
    while (true)
    {
        double termAdded = ((pow(-1, n)) / myFact(2 * n)) * (pow(x, 2 * n));
        
        sum += termAdded;
        
        //cout << termAdded << endl;
        //cout << abs(termAdded) << endl;

        if (abs(termAdded) < threshold) {break;}
        n++;
    }
    return sum;
}

double tanTaylor(double x)
{
    double tanResult = sin(x) / cos(x);
    return tanResult;
}

