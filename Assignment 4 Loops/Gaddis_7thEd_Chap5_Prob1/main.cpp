/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on April 10, 2014, 11:10 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    int Number,integer = 1,sum = 0;
    //Ask user for input of integer
    cout<<"Enter a positive integer: "<<endl;
    //User enter a positive integer
    cin>>Number;
    //Loop for data that was input 
      while (integer<=Number||Number<=-1){          
          sum=sum+integer;
          integer++;
    //Moves to "if" statement if negative integer entered
      if (Number<=-1){
      cout<<"Please enter a Positive Integer: "<<endl;
        cin>>Number;      
      }
      }
    //Display the results
     cout<<"The sum of all numbers from 0 to number entered is: \n"<<sum<<endl;
    //Exit Stage Here:    
    return 0;
}

