/**
 This program takes the values given (years, interest rate, and future value) and plugs them into 
 an equation in order to determine how much the user will need to deposit into the function today
 in order to have their account have an end balace of $10,000 in 10 years.
**/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//prototype for presentValue function
double presentValue(double yr, double rate, double fValue);

int main()
{
    double years= 10.0;                 //how many years the account will accrue interest (given)
    double rate =0.042;                 //interest rate (given)
    double fValue = 10000.00;           //total end balance (given)
    double pValue;                      //present value needed to be deposited today to acheive end balance
    
    //Manipulates decimal point to 2 places
    cout << fixed << showpoint << setprecision(2);
    
    //Calls pValue function with given values
    pValue = presentValue(years, rate, fValue);
    
    //Prints pValue value
    cout<<"If you want to have $" << fValue << " in " << years << " years then you need to deposit $" << pValue << " today." << endl;
    
    return 0;
    
}

//PresentValue equation that takes the given elements in order to calculate how much the user needs to deposit
double presentValue(double yr, double rate, double fValue)
{
    double pValue;
    pValue =(fValue)/ pow((1+ rate), yr);
    return pValue;
}