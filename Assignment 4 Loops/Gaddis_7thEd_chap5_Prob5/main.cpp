/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on April 17, 2014, 1:04 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {

           //Declare Variables
    //Declare Variables
   float Ptax,incrse = .04;
   float Years;
   float membership=2500;
   float tax,Ctotal;
   
   
    //Calculate the calories burned on treadmill 
    for (Years=1;Years<=6;Years++){
        //Ptax= equals the increase in percentage of.04 per year
        Ptax=Years*incrse;
        //tax= equals the actual number increased not percentage and -1 is 
        //subtracted to remove the one from years
        tax=(membership*Ptax)-1;
        //tax++= to repeat the adding up to six times of each year
        tax++;
        //Ctotal= is the total increase cost of increase in 
        Ctotal=membership+tax;
        cout<<"Projected rate increase in  "<<Years<<": "<<Ctotal<<endl;
    }
    
   return 0; 
}

