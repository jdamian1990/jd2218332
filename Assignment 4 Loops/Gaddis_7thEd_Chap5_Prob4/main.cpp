/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on April 16, 2014, 11:57 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
   float Cals,CalPm = 3.9;
   int Min;
   
    //Calculate the calories burned on treadmill 
    for (Min=10;Min<=30;Min+=5){
        Cals=Min*CalPm;
        cout<<"Calories burned after "<<Min<<" minutes: "<<Cals<<endl;
    }
    
    //Exit Stage Here:
    return 0;
}


