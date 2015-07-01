#include <iostream>
using namespace std;

//Prototype for searchList function
int searchList(const int [], int, int);

//Number of tickets user plays
const int NUM = 10;

int main()
{
    //User's numbers
    int pNum[NUM] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int win;                    //Winning number
    int results;                //If there is a match or not
    
    cout<< "Please enter this week's winning 5 digit number: " << endl;
    cin>> win;
    
    //Searches array for winning ticket
    results = searchList(pNum, NUM, win);
    
    //If results = -1 then there is no match otherwise there is a match
    //If there is a match it returns which ticket is the winner
    if(results == -1)
    {
        cout<< "Sorry, you do not having a winning ticket." << endl;
    }
    else
    {
        cout<<"Congratulations! Ticket number " << (results + 1) << " is a match!" << endl;
    }
    return 0;
}

//Searches array for a matching 5 digit number
//If member function returns -1 then there is no match
int searchList(const int list[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;
    
    while (index < size && !found)
    {
        if(list[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}