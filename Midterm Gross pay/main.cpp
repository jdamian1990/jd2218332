/* 
 * File:   main.cpp
 * Author: Jose
 *
 * Created on April 24, 2014, 11:44 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
	float pay;
	float hours;
	float gross;
     //Prompt user to input the data   
	cout<<"Please input the rate of pay hourly: "<<endl;;
	cin >> pay;
	cout<<"Please input the number of hours that you worked: "<<endl;
	cin >> hours;
	//loop for calculating the gross pay 	   
	if (hours <= 20)
	{  
		gross = hours * pay;
	}
	else if (hours>20&&hours<41)
	{
		gross = (20 * pay) +(hours - 20) * (pay * 1.5);
        }
        else 
	gross = 400 + (hours - 40)* (pay * 2);
	
      //Display the results  
	cout << "The gross pay of this employee is $" << gross << ".\n" << endl;
 //Exit Stage Here:       
    return 0;
}

