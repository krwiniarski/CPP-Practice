//This program asks the user the for the number of tests they need to enter scores for
//the program sorts the scores in ascending order in addition to finding the average
//pointers are utilized when possible

//prototype function
void sortScores(double [], int);

#include <iostream>
#include <iomanip>;
using namespace std;

int main() {
    double *scores,     //pointer for test scores
    average,            //test average
    total = 0.0;        //total earned
    int numTest;        //number of tests

    
    cout<<"How many tests do you need to enter scores for? ";
    cin>>numTest;
    
    //create new array with test scores
    scores = new double[numTest];
    
    //get test scores
    for(int count=0; count<numTest; count++)
    {
        cout<<"Please enter the score for test " << (count + 1) << " : ";
        cin>> scores[count];
        //input validation
        if(scores[count] < 0)
        {
            cout<<"ERROR: Scores cannot be negative.";
            cout<<"Please enter the score for test " << (count + 1) << " : ";
            cin>> scores[count];
        }
    }
    
    //get total
    for(int count=0; count<numTest; count++)
    {
        total+= scores[count];
    }
    
    //get average
    average = total/ numTest;
    
    //sorts test scores in ascending order
    cout<<"The scores sorted in ascending order are: ";
    sortScores(scores, numTest);
    for (int count = 0; count < numTest; count++){
        cout<<"Score "<<(count+1)<<": "<<scores[count]<<endl;
    }

    //reports average
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The average is: " << average << endl;

    //free dynamically allocated memory
    delete [] scores;
    scores = 0;
    
    return 0;
        
    }

//sorts scores in ascending order
void sortScores(double scores[], int size)
{
    int temp;
    bool swap;
    
    do{
        swap = false;
        for (int count=0; count<size-1; count++ )
        {
            if(scores[count] > scores[count +1])
            {
                temp = scores[count];
                scores[count] = scores[count + 1];
                scores[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}



