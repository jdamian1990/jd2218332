/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on April 21, 2014, 12:26 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    int answer;
    //Ask user to input age
    cout<<"Please guest my correct age?"<<endl;
    
    
    do{
    cin>>answer;
    
    if (answer<23){
        cout<<"Answer is much higher number. Please take another guess."<<endl;
    }
        else if (answer>23){
            cout<<"Answer is much lower number. Please take another guess."<<endl;
        }
        else {
            cout<<"Answer is correct my age is 23 years old."<<endl;  
        }
    } while (answer !=23);

    return 0;
}

