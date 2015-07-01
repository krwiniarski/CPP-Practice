//This program uses the Car class and header and creates an object, testCar, and tests the
//accelerate, brake, and getSpeed member functions of the class

#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

int main()
{
    Car testCar(2015, "Mustang");       //An object of the Car class
    
    //Accelerates the car 5 times and prints speed
    cout<<"We will begin accelerating the car now." << endl;
    for(int i=0; i<=5; i++)
    {
        testCar.accelerate();   //calls the accerlerate member function
        cout<<"\nThe speed of the car is now: " << testCar.getSpeed() << " MPH.";
    }
    cout<<endl;
    
    //Brakes the car 5 times and prints speed
    cout<<"\nWe will now begin to brake the car." <<endl;
    for(int i=0; i<=5; i++)
    {
        testCar.brake();        //calls the brake member function
        cout<<"\nThe speed of the car is now: " << testCar.getSpeed() << " MPH.";
        
    }
    
    
    return 0;
}