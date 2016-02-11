/* 
 * File:   main.cpp
 * Author: Jose Damian
 *
 * Created on April 16, 2014, 10:51 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
//Declare Variables
     float distnce,speed,time;
    //Prompt user for speed
    cout<<"What is the speed of the vehicle in mph:"<<endl;
    cin>>speed;
    //Speed input validation
    while(speed<0){
        cout<<"Please enter a valid integer(1 or higher):"<<endl;
        cin>>speed;
    }
    cout<<"How many hours has it traveled?"<<endl;
    cin>>time;
    while(time<1){
        cout<<"Please enter a value greater than 1."<<endl;
        cin>>time;
    }
    distnce=speed*time;
    cout<<"Hour Distance-Traveled"<<endl;
    cout<<"------------------------------------------"<<endl;
    for(int hour=1;hour<=time;hour++){
        cout<<" "<<hour<<"       "<<speed*hour<<endl;
    }
    //Exit Stage Here:
    return 0;
}

