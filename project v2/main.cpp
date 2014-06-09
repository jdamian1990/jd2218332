/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on June 6, 2014, 1:58 AM
 */

//System Libraries
#include <iostream>//require for input and output 
#include <cstdlib>//require for random generator
using namespace std;

//Global Constants

//Function Prototypes
  //2D array for map
int map[10][10];//rows = 10, columns = 10
int ships();//Location of ships
void sShips();//For placement of random ships
void Show();//To show the exact location of the ships aka cheat map
//For attacking coordinates 
bool Strike(int,int);//Pass by Value and bool used for true(1) or false(0) 
void mships();//for map with no ships
void Input(int &);//pass by reference 
//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    int a=0;
    //Set random generator
    srand(time(0));//Set for actual random locations 
  
    sShips();//Function for random ships  
    cout<<"Hello Welcome to the Battleship Game: "<<endl;
    cout<<"Enter 1 to begin or any other number to exit: ";
    cin>>a;
    Input(a);
    cout<<a;
//Exit Stage Right:
    return 0;
}
//Location of Ships
int ships(){
    int c =0;
    int x=0,y=0;
    for(int i=0;i<10;i++){
        
        for (int j=0;j<10;j++){

            if(map[i][j]==1)
                    c++;
        }
    }          
    return c;
}
//Pass by reference &
void Input(int &a){
    //Declare Variables
    int A,B;
    if (a==1){// if user enters 1 then it continues to display the following  
    //Welcome the user
    cout<<"Please enter the following to begin the game:"<<endl;
   while(1){
       //Prompt user to input data
       cout<<"Enter the coordinates: Ex:(0,1 up to # 9)\n";
       cout<<"Coordinate 1(column)(Enter 21 for cheat map): ";
       //Loop for number validation
       do{
       //Coordinate A is equal to the row
       cin>>A;
       //Loop for number validation
       if (A!=0&&A!=1&&A!=2&&A!=3&&A!=4&&A!=5&&A!=6&&A!=7&&A!=8&&A!=9)
           cout<<"Try again.Please enter a number from 0 to 9(Enter 21 for cheat map): "<<endl;
       if(A==21)//displays the answers
           Show();
       }while(A!=0&&A!=1&&A!=2&&A!=3&&A!=4&&A!=5&&A!=6&&A!=7&&A!=8&&A!=9&&A!=21);
       cout<<"Coordinate 2(row)(Enter 21 for cheat map): ";
        //Loop for number validation
       do{
       //Coordinate B is equal to the column
       cin>>B;
       //Loop for number validation
       if (B!=0&&B!=1&&B!=2&&B!=3&&B!=4&&B!=5&&B!=6&&B!=7&&B!=8&&B!=9)
       cout<<"Try again.Please enter a number from 0 to 9(Enter 21 for cheat map): "<<endl;
         if(A==21)//displays the answers
           Show();
       }while(B!=0&&B!=1&&B!=2&&B!=3&&B!=4&&B!=5&&B!=6&&B!=7&&B!=8&&B!=9&&A!=21);
        if(Strike(A,B))//(Striking) function is Pass by Value
            cout<<"You got one! You still have "<<ships()<<" ships to shoot down."<<endl;
       else
           cout<<"Please try again. "<<endl;
        
       cout<<endl;
       mships();       
    }
    }
}
//Pass by Value Function 
bool Strike(int A, int B){
  
    if (map[A][B] == 1){
        map [A][B] = 2;
        return true;
    }
    return false;
}
//For placement of Ships
void sShips(){//sShips is to set the ships
    int s = 0;
    int nShips = 10;//This is the number of ships
    while(s<nShips){
        int A = rand()%10;//Set for random up to 9
        int B = rand()%10;//Set for random up to 9
        if(map[A][B] !=1){
            s++;
            map[A][B] = 1;
        }
    }
}

//To show where the ships are located
void Show(){//Show() is the cheat map for location of ships
        for(int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            cout<<map[i][j]<<" ";           
        }
        cout<<endl;
    }
}
//The map for the user to see where to strike next
void mships(){//the ships on the map
        for(int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            
            if (map[i][j] ==1){
            cout<<"0 ";
            }
            else 
                cout<<map[i][j]<<" ";
        }
        cout<<endl;
    }
}