//Header for Car class

#ifndef Car_Car_h
#define Car_Car_h

class Car
{
private:
    int year;                   //Year of car
    std::string make;           //Model of car
    int speed;                  //Current speed of car
    
public:
    //Constructor
    Car(int yr, std::string make)
    {
        year = yr;
        speed =0;
    }
    ::std::string getMake();            //Returns car make
    int getSpeed();                     //Returns car speed
    int accelerate();                   //Accerlerates car- adds 5 to speed
    int brake();                        //Brakes car- subtracts speed by 5
    int getYear();                      //Returns year of car
    
};


#endif
