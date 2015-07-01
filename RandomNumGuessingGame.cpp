// This program is a random number guessing game. The game tells users if their guess is correct,
// too high, or too low.

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num = rand() % 100 +1;          //Generates a number between 1 and 100
    int guess;                          //User's guess
    
    cout<< "This program is a random number guessing game. Please enter a number "
            "between 1 and 100: ";
    cin>> guess;
    
    //If guess is incorrect
    while (guess != num)
    {
        //If guess is too high
        if(guess > num)
        {
            cout<<"Your guess was too high!"<< endl;
        }
        //If guess is too low
        else
        {
            cout<<"Your guess was too low!" << endl;
        }
        cout<< "Please try again! Enter a number between 1 and 100: ";
        cin>> guess;
    }
   
    //If guess is correct
    if (guess == num)
    {
        cout<<"\nCongratulations! You guessed my number!";
    }
    
    return 0;
}
