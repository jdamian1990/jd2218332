/* 
 * File:   main.cpp
 * Author: Jose
 * Created on April 16, 2014, 11:11 PM
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants:

//Function Prototypes:

//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    int guess;
    int num;
    char reply;
    //Initialize random number seed
    srand(static_cast<unsigned int>(time(0)));
    num=rand()%100+1;
    cout<<"I'm thinking of a number between 1 and 100."<<endl;
    cin>>guess;
    //Loop if the guess is wrong
    while (guess!= num){
        if (guess < num){
            cout << "Too low. Try again."<<endl;
            cin>>guess;
        }
        if (guess > num){
            cout << "Too high. Try again."<<endl;
            cin>>guess;
        }
    }

    //Exit Stage Here:
    return 0;
}

