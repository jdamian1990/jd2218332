/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on April 25, 2014, 1:30 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    float hours,package,bill;
    float pack1,pack2,pack3;
    pack1 = 29.95;
    pack2 = 34.95;
    pack3 = 42.95;
            
    //Ask user to input which package do they have
    cout<<"Please input which ISP package you currently have: "<<endl;
    cout<<"------------------"<<endl;
    cout<<"Package 1: $ 29.95"<<endl;
    cout<<"Package 2: $ 34.95"<<endl;
    cout<<"Package 3: $ 42.95\n"<<endl;
    cout<<"Input 1,2,or 3:"<<endl;
    cin>>package;
    
    //Ask user to input how many hours used
    cout<<"\nPlease input the hours of usage:"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Input example (8,10,etc):"<<endl;
    cin>>hours;
    //Loop if user chooses package 1
    if (package==1&&hours<12&&hours>0)
        bill = 29.95;
    else if (package==1&&hours>11&&hours<23)
        bill = 29.95 + ( (hours - 11 )* 2.25 ); 
    else if (package==1&&hours>22)
        bill = 54.70 + ( (hours - 22)* 4.95 );
    //Loop if user chooses package 2
    else if (package==2&&hours<23&&hours>0)
        bill = 34.95;
    else if (package==2&&hours>22&&hours<34)
        bill = 34.95 + ( (hours - 22 )* 1.25 ); 
    else if (package==2&&hours>33)
        bill = 48.70 + ( (hours - 33)* 2.25 );
    //Loop if user chooses package 3
    else if (package==3&&hours>=1)
        bill = 42.95;      
  //Display the results  
    ;cout<<"The total monthly bill is: $ "<<bill<<endl;
 //Exit Stage Here:       
    return 0;
}

