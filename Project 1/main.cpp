/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on April 25, 2014, 9:31 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants:

//Function Prototypes:
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();

//Begin Execution Here:
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=5);
    //Exit Stage Here
    return 0;
}
//Display the Menu
void Menu(){
    cout<<"Guess that _Number_ Game!!"<<endl;
    cout<<"Please enter one number from [1-4] to begin the game: (Example:3)"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}
//Ask user to input one number from 1-5. 
int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
    //Declare Variables
    int answer;
    //Ask user to input age
    cout<<"How to play: "<<endl;
    cout<<"1)Enter any Number "<<endl;
    cout<<"2)Wait for reply"<<endl;
    cout<<"3)Keep guessing until you guess the correct number.\n"<<endl;
    cout<<"Please enter any number:"<<endl;    
    
    do{
    cin>>answer;
    
    if (answer<23){
        cout<<"Answer is much higher number. Please take another guess."<<endl;
    }
        else if (answer>23){
            cout<<"Answer is much lower number. Please take another guess."<<endl;
        }
        else {
            cout<<"Congratulations!! The answer is correct the number is [23]."<<endl;  
        }
    } while (answer !=23);
    

}

void problem2(){
    //Declare Variables
    int answer;
    //Ask user to input age
    cout<<"How to play: "<<endl;
    cout<<"1)Enter any Number "<<endl;
    cout<<"2)Wait for reply"<<endl;
    cout<<"3)Keep guessing until you guess the correct number.\n"<<endl;
    cout<<"Please enter any number:"<<endl;
    
    do{
    cin>>answer;
    
    if (answer<100){
        cout<<"Answer is much higher number. Please take another guess."<<endl;
    }
        else if (answer>100){
            cout<<"Answer is much lower number. Please take another guess."<<endl;
        }
        else {
            cout<<"Congratulations!! The answer is correct the number is [100]."<<endl;  
        }
    } while (answer !=100);
}

void problem3(){
    //Declare Variables
    int answer;
    //Ask user to input age
    cout<<"How to play: "<<endl;
    cout<<"1)Enter any Number "<<endl;
    cout<<"2)Wait for reply"<<endl;
    cout<<"3)Keep guessing until you guess the correct number.\n"<<endl;
    cout<<"Please enter any number:"<<endl;
    
    
    do{
    cin>>answer;
    
    if (answer<7){
        cout<<"Answer is much higher number. Please take another guess."<<endl;
    }
        else if (answer>7){
            cout<<"Answer is much lower number. Please take another guess."<<endl;
        }
        else {
            cout<<"Congratulations!! The answer is correct the number is [7]."<<endl;  
        }
    } while (answer !=7);
}

void problem4(){
    //Declare Variables
    int answer;
    //Ask user to input age
    cout<<"How to play: "<<endl;
    cout<<"1)Enter any Number "<<endl;
    cout<<"2)Wait for reply"<<endl;
    cout<<"3)Keep guessing until you guess the correct number.\n"<<endl;
    cout<<"Please enter any number:"<<endl;
    
    
    do{
    cin>>answer;
    
    if (answer<15){
        cout<<"Answer is much higher number. Please take another guess."<<endl;
    }
        else if (answer>15){
            cout<<"Answer is much lower number. Please take another guess."<<endl;
        }
        else {
            cout<<"Congratulations!! The answer is correct the number is [15]."<<endl;  
        }
    } while (answer !=15);
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}

