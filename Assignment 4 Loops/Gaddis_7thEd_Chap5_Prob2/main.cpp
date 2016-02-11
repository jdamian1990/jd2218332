/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on April 16, 2014, 11:19 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    char lettr=32;
    //Loop until 127
    for (int lettr= 32;lettr<= 127;lettr++){
        if (lettr%16==0)
            cout<<endl;
        cout<<char(lettr)<<" ";
    }
    //Exit Stage Here:
    return 0;
}

