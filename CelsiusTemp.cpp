/** This program converts degrees Fahrenheit into Celsius. 
 The user inputs a value and then the program converts it. 
 In order to show the function celsius is successful, the program loops
 the function 20 times to show Celsius conversion for Fahrenheit values
 from 1 to 20.
 **/

#include <iostream>
#include <iomanip>          //Needed for decimal manipulation
using namespace std;

//prototype for celsius function
double celsius(double temp);

int main()
{
    double fTemp;       //temperate in Fahrenheit
    double cTemp;       //temperature in Celsius
    
    //Manipulates decimal so that only 2 decimal places are shown
    cout << fixed << showpoint << setprecision(2);
    
    cout << "This program asks the user for the temperature in degrees Fahrenheit and ";
    cout <<"converts it into degrees Celsius.\n";
    
    //Get user input
    cout<<"What is the temperature in degrees Fahrenheit? "<< endl;
    cin>>fTemp;
    //Calls celsius function and passes user input into function
    cTemp = celsius(fTemp);
    //Prints converted temperature
    cout<< "That is " << cTemp << " degrees Celsius.";
    
    //Loops celsius function 20 times to show values from Fahrenheit values for 1 to 20
    for(double val=0.0; val<=20.0; val++)
    {
        cout<< "\nWhen it is " << val << " degrees Farhenheit, it is "<< celsius(val) << " degrees Celsius."<<endl;
    }
    return 0;
    
}

//Converts degrees into Celsius
double celsius(double temp)
{
    return (5.0/9.0) * (temp - 32.0);
}