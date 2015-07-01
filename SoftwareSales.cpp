//This program calculates the total due for a software company. The program applies discounts if applicable.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int quantity;           //The quantity the user intends to purchase
    double discount,        //Discount applied to purchase
    price = 99.00,          //Price per software program
    total= 0.00;            //Total due
    
    cout<< "How many copies of the program are you buying? "<<endl;
    cin>> quantity;
    
    
    if(quantity > 0)
    {
    
        if (quantity>=10 && quantity <=19)
        {
            cout<< "You have qualified for a discount of 20%.";
            total *= 0.80;
        }
        else if (quantity >=20 && quantity<=49)
        {
            cout<< "You have qualified for a discount of 30%.";
            total *= 0.70;
        }
        else if (quantity>= 50 && quantity<= 99)
        {
            cout<< "You have qualified for a discount of 40%.";
            total *= 0.60;
        }
        else if (quantity >= 100)
        {
        cout<< "You have qualified for a discount of 50%.";
        total *= 0.50;
        }
        
        total = quantity * price;
        cout<< "Your total amount due is: $"<<fixed<< showpoint<< setprecision(2)<<total<<endl;
    }
    else
    {
        cout<< "Invalid entry. Please restart the program and try again.";
    
    }
    
    
    
    return 0;
}