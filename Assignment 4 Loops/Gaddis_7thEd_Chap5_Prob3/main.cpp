/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on April 17, 2014, 10:43 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
   //Declare Variables
   float milli,MpYear = 1.5;
   int years;
   
    //Calculate the years of rise in water
    for (years=1;years<=25;years++){
        milli=years*MpYear;
        cout<<"The ocean will have risen "<<milli<<" millimeters in "<<years<<" years."<<endl;
    }
    //Exit Stage Here:
   return 0;
}

