/* 
 * File:   main.cpp
 * Author: Jose Damian
 *
 * Created on April 25, 2014, 7:14 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short Anumber;
     int Balance,checks,deposits;
    //Display user to input his account number
    cout<<"Please enter your six digit account number:";
    //Loop to for input to only accept six digits
     do{  
    //User inputs digits
    cin>>Anumber;
    //Loop for input to only accept six digit 
    if (Anumber<=99999)
        cout<<"Please try again. Enter only a six digit account number: "<<endl;
    else if (Anumber>=1000000)
        cout<<"Please try again. Enter only a six digit account number: "<<endl;
    else 
        cout<<"Thank You. Your six digit account number was recorded:"<<endl;
     }while(Anumber<=99999||,Anumber>=1000000&&);
   

    return 0;
}

