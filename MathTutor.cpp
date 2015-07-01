//This program is a math tutor that adds two random numbers up

#include <iostream>
#include <cstdlib>          //Header file needed for rand()
#include <iomanip>          //Header file needed for setw()
#include <string>
using namespace std;

int main() {
    int number1,            //First random number
    number2,                //Second random number
    answer,                 //User's answer
    solution;              //Solution to the problem
    
    //Assigns a random number to both numbers
    number1 = rand()% 9 +1;
    number2 = rand()% 9 + 1;
    //Calculates the solution to the problem
    solution = number1 + number2;

    cout<< "Please solve the following: "<< endl;
    cout<< "\n" << setw(5)<<number1 << endl;
    cout<< "+ " << setw(3)<< number2 << endl;
    cout<< "______" <<endl;
    cout<<"\n What is your answer? ";
    cin>> answer;
    cout<<"\nThe solution was: "<<solution<<endl;
    
    return 0;
}