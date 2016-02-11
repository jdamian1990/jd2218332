/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on April 18, 2014, 1:27 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void celsius();
//Execution Begins Here:
int main(int argc, char** argv) {
    cout<<celsius();
    //Exit Stage Here:

    return 0;
}

void celsius(){
        //Declare variables
    int celsius,fahren;
    //Loop and display conversion from 0 to 20 degrees
    for(int celsius=0;celsius<=20;celsius++){
        fahren=1.8*celsius+32;
        cout<<celsius<<"C = "<<fahren<<"F"<<endl;
    }
}