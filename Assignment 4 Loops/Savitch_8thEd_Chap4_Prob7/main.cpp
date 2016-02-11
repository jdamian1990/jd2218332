/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on April 15, 2014, 12:24 AM
 */

//System libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constant

//Function Prototype
float bmr(int pndPar);
float pact(int intPar, int pndPar, int minPar);
//Execution Begins Here
int main(int argc, char** argv) {
    //Define Variables
    float pounds,intsty,min,calr,basal,physAct,digest,tot;
    //Prompt user inputs for weight,intensity,minutes,calories
    cout<<"Enter your weight: ";
    cin>>pounds;
    cout<<endl;
    cout<<"Estimated intensity levels"<<endl;
    cout<<"Walking = 1"<<endl;
    cout<<"Basketball = 8"<<endl;
    cout<<"Running 6 mph = 10"<<endl;
    cout<<"Running 10 mph = 17"<<endl;
    cout<<"Enter your estimated level: ";
    cin>>intsty;
    cout<<endl;
    cout<<"Enter how long you worked out for in minutes: ";
    cin>>min;
    cout<<endl;
    cout<<"Enter number of calories eaten in one serving of favorite food: ";
    cin>>calr;
    cout<<endl;
    //Set decimal precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //function calls
    basal=bmr(pounds);
    physAct=pact(intsty,pounds,min);
    //equation for digestion
    digest=calr*0.1;
    //total servings required to maintain weight
    tot=((basal+physAct+digest)/calr);
    cout<<"You must eat "<<tot<<" servings to maintain your weight."<<endl;
    //Exit Stage Right
    return 0;
}
float bmr(int pndPar){
    
    return (70*pow(pndPar/2.2,0.756));
}
float pact(int intPar, int pndPar, int minPar){
    
    return (0.0385*intPar*pndPar*minPar);
}
