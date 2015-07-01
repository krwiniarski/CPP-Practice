//This program calculates the total due for a restaurant bill with tax and tip included

#include <iostream>
using namespace std;

int main()
{
    float mealCharge = 44.50,       //Meal charge
    tax = 0.0675,                   //Tax percentage
    tip = 0.15,                     //Tip percentage
    tipAmount,                      //Tip total
    taxAmount,                      //Tax total
    charges,                        //Meal charge plus tax
    total;                          //Total amount due
    
    taxAmount = mealCharge * tax;
    cout<< "Tax: $" << taxAmount;
    
    //Calculating meal charge plus tax
    charges = mealCharge * (tax+1);
    //Caculates total plus tip
    tipAmount =charges * tip;
    cout<<"\nTip: $" << tipAmount;
    total = charges * (1 + tip);
    
    //Prints total due
    cout << "\nYour total is: $" << total << endl;
    
    return 0;
}