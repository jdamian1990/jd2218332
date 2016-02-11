/* This is a Game I created for two players on a Battleship map
 * File:   main.cpp
 * Author: Jose Damian
 * Created on June 6, 2014, 1:58 AM
 * Final Project 2
 */

//System Libraries
#include <iostream>//require for input and output 
#include <cstdlib>//standard library
#include <ctime> //for random generator
#include <fstream>//to read and write to files
using namespace std;

//Global Constants

//Function Prototypes
  //2D array for map
 int map[10][10];//rows = 10, columns = 10
 int map2[10][10];//For player 2
 //Location of ships
 int ships();
 int ships2();//For player 2
//For placement of random ships
 void sShips();
 void sShips2();//For player 2
//To show the exact location of the ships aka cheat map
 void Show();
 void Show2();//For player 2
//For attacking coordinates 
 bool Strike(int,int);//Pass by Value and bool used for true(1) or false(0) 
 bool Strike2(int,int);//For player 2
 //for map with no ships
 void mships();
 void mships2();//For player 2
 //pass by reference
 void Input(int &); 
 
//Execution Begins Here:
int main(int argc, char** argv) {
    //Declare Variables
    int a=0;
    //Set random generator
    srand(time(0));//Set for actual random locations 
    //Function for random ships  
    sShips();
    sShips2();
    cout<<"Hello Welcome to the Battleship Game: "<<endl;
    cout<<"This is a 2 player game: "<<endl;
    cout<<"Enter 1 to begin or any other number to exit: "<<endl;
    //Prompt User to input the data
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
//This is for player 2
int ships2(){
    int c =0;
    int x=0,y=0;
    for(int i=0;i<10;i++){
        
        for (int j=0;j<10;j++){

            if(map2[i][j]==1)
                    c++;
        }
    }          
    return c;
}
//Pass by reference &
void Input(int &a){
    //Declare Variables
        //For player1
    int A,B;
        //For player 2
    int C,D;

    // if user enters 1 then it continues to display the following  
    if (a==1){
    //example of the map
       cout<<"\n 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 "<<endl;
       cout<<" 0 0 0 0 0 0 0 0 0 0 \n"<<endl; 
     //Welcome the user
    cout<<" Map is Above "<<endl;
    cout<<"Please enter the following to begin the game:"<<endl; 
   do{
       //Prompt user to input data
       cout<<"Player 1 your turn: "<<endl;
       cout<<"Enter the coordinates: (Ex:(0,1) - up to 9)\n";
       cout<<"(Enter 21 for cheat map): \n";
       cout<<"Coordinate 1(column): ";
       //Loop for number validation
       do{
       //Coordinate A is equal to the row
       cin>>A;
       //Loop for number validation
       if (A!=0&&A!=1&&A!=2&&A!=3&&A!=4&&A!=5&&A!=6&&A!=7&&A!=8&&A!=9)
           cout<<"\nTry again.Please enter a number from 0 to 9(Enter 21 for cheat map): "<<endl;
       //displays the answers
       if(A==21)
           Show();
       //Loop for the validation
       }while(A!=0&&A!=1&&A!=2&&A!=3&&A!=4&&A!=5&&A!=6&&A!=7&&A!=8&&A!=9&&A!=21);
       cout<<"Coordinate 2(row): ";
        //Loop for number validation
       do{
       //Coordinate B is equal to the column
       cin>>B;
       //Loop for number validation
       if (B!=0&&B!=1&&B!=2&&B!=3&&B!=4&&B!=5&&B!=6&&B!=7&&B!=8&&B!=9)
       cout<<"\nTry again.Please enter a number from 0 to 9: "<<endl;
         if(A==21)//displays the answers
           Show();
       }while(B!=0&&B!=1&&B!=2&&B!=3&&B!=4&&B!=5&&B!=6&&B!=7&&B!=8&&B!=9&&A!=21);
        if(Strike(A,B))//(Striking) function is Pass by Value
            cout<<"\nYou got one! You still have "<<ships()<<" ships to shoot down."<<endl;
       else
           cout<<"\nPlease try again. "<<endl;
        
       cout<<endl;
       mships2();
       //Prompt user to input data
       cout<<"Player 2 your turn: "<<endl;
       cout<<"Enter the coordinates: (Ex:(0,1) - up to 9)\n";
       cout<<"(Enter 21 for cheat map): \n";
       cout<<"Coordinate 1(column): ";
       //Loop for number validation
       do{
       //Coordinate C is equal to the row
               
       cin>>C;
       //Loop for number validation
       if (C!=0&&C!=1&&C!=2&&C!=3&&C!=4&&C!=5&&C!=6&&C!=7&&C!=8&&C!=9)
           cout<<"\nTry again.Please enter a number from 0 to 9(Enter 21 for cheat map): "<<endl;
       //displays the answers
       if(C==21)
           Show2();
       }while(C!=0&&C!=1&&C!=2&&C!=3&&C!=4&&C!=5&&C!=6&&C!=7&&C!=8&&C!=9&&C!=21);
       cout<<"Coordinate 2(row): ";
        //Loop for number validation
       do{
       //Coordinate D is equal to the column
       cin>>D;
       //Loop for number validation
       if (D!=0&&D!=1&&D!=2&&D!=3&&D!=4&&D!=5&&D!=6&&D!=7&&D!=8&&D!=9)
       cout<<"\nTry again.Please enter a number from 0 to 9: "<<endl;
         if(C==21)//displays the answers
           Show2();
       }while(D!=0&&D!=1&&D!=2&&D!=3&&D!=4&&D!=5&&D!=6&&D!=7&&D!=8&&D!=9&&C!=21);
        if(Strike2(C,D))//(Striking) function is Pass by Value
            cout<<"\nYou got one! You still have "<<ships2()<<" ships to shoot down."<<endl;
       else
           cout<<"\nPlease try again. "<<endl;
        
       cout<<endl;
       //for files
       ofstream table;
       table.open("Map.txt");
       table<<"The BattleShip Game is a two player game the first to hit all targets wins"<<endl;
       table<<"\r\nThere is a total of 10 ships to drop. "<<endl;
       table<<"\r\nSo Have fun and Good Luck "<<endl;
       table<<"\r\n"<<endl;
       table<<"\r\nThis is the map for the BattleShip Game Player 1: "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;      
       table<<"\r\n"<<endl;
       table<<"\r\nThis is the map for the BattleShip Game Player 2: "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;
       table<<"\r\n0 0 0 0 0 0 0 0 0 0 "<<endl;  
       table<<"\r\nRemember first to hit all targets wins ;) "<<endl;  
       table.close();
       mships();   
     //Loop to stop when one player wins the game  
    }while (ships()!=0||ships2()!=0);
    }
    cout<<"Thank you for Playing BattleShips Game :) "<<endl;
    }
//Pass by Value Function 
//For player 1
bool Strike(int A, int B){
  
    if (map[A][B] == 1){
        map [A][B] = 2;
        return true;
    }
    return false;
}
//Pass by Value Function 
//This is for player2
bool Strike2(int C, int D){
  
    if (map2[C][D] == 1){
        map2[C][D] = 2;
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
//For placement of Ships
//For player 2
void sShips2(){//sShips is to set the ships
    int s = 0;
    int nShips = 10;//This is the number of ships
    while(s<nShips){
        int C = rand()%10;//Set for random up to 9
        int D = rand()%10;//Set for random up to 9
        if(map2[C][D] !=1){
            s++;
            map2[C][D] = 1;
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
//To show where the ships are located
//For player 2
void Show2(){//Show() is the cheat map for location of ships
        for(int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            cout<<map2[i][j]<<" ";           
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
//The map for player 2 the user to see where to strike next
void mships2(){//the ships on the map
        for(int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            
            if (map2[i][j] ==1){
            cout<<"0 ";
            }
            else 
                cout<<map2[i][j]<<" ";
        }
        cout<<endl;
    }
}