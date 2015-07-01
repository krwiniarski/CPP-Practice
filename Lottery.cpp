#include <iostream>
using namespace std;

//prototype for the matchCounter function
int matchCounter(int winningDigits[], int players[], int size, int common);

int main()
{
    const int NUM = 5;                  //Number of lottery numbers
    int winningDigits[NUM];             //Winning digit array
    int player[NUM];                    //Player's array
    int common=0;                       //Number of matches
    
    cout<< "Welcome to the lottery! The program will first ask you to select your numbers for the lottery, compare them with the winning lottery numbers, and then tell you how many of your numbers matched the winning lotter numbers." << endl;
    
    //Populate the winning digits array with random numbers between 0 and 9
    for(int index=0; index<NUM; index++)
    {
        winningDigits[index] = rand() % 9;
    }
    
    //Populates the player's array
    cout<< "\nPlease enter your 5 numbers to play in the lottery. Please only enter between 0 and 9. " << endl;
    for(int index=0; index<NUM; index++)
    {
        int pNumber;
        cout<<"Enter the next number: ";
        cin>> pNumber;
        player[index] = pNumber;
    }
    cout<<endl;
    
    //Prints the player's numbers
    cout<<"\nThe numbers that you picked were: ";
    for(int index=0; index<NUM; index++)
    {
        cout<< player[index] << " ";
    }
    
    //Prints the winning numbers
    cout<<"\nThe winning numbers are: ";
    for(int index=0; index<NUM; index++)
    {
        cout<< winningDigits[index] << " ";
    }
    
    cout<<endl;
    cout<<endl;
    common = matchCounter(winningDigits, player, NUM, common);
    cout<< "There are " << common << " matches between your numbers and the winning numbers."<< endl;
    
    //Tells the user they won the lotter if all numbers match
    if(common ==5)
        cout<<"Congratulations! You won the lottery!";

    
    return 0;
}

//Counts the number of matches between the winning numbers and the player's numbers
int matchCounter(int winningDigits[5], int player[5], int NUM, int common){
    for (int index=0; index<NUM; index++)
    {
       
        if(winningDigits[index] == player[index])
        {
            common +=1;
        }
        
    }
    return common;
}
