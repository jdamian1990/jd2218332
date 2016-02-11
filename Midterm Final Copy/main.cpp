//Dr. Mark E. Lehr
//April 21st, 2014
//Menu to be used for the midterm
//homework and final, etc....

//System Libraries
#include <iomanip>
#include <iostream>
using namespace std;

//Global Constants Here!!!

//Function Prototypes Here!!!
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Begin Execution Here!!!
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
        case 5:    problem5();break;
        case 6:    problem6();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=6);
    return 0;//If midterm not perfect, return something other than 1
}

void Menu(){
    cout<<"Menu for the Midterm:"<<endl;
    cout<<"Type: 1 = for problem 1 - Type: 2 = for problem 2"<<endl;
    cout<<"Type: 3 = for problem 3 - Type: 4 = for problem 4"<<endl;
    cout<<"Type: 5 = for problem 5 - Type: 6 = for problem 6"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
    //Declare Variables
    int x;
    int nlines;
   
    //Display the question
    cout<<"Please enter the number of lines the user wants to output: "<<endl;
    //Prompt user to enter the number
   cin>>x;
   //Display the results
   cout<<"Here is the output:"<<endl;
    //Loop for the number entered and lines 
    for (nlines=1;nlines<=x;nlines++){
         int x=nlines;
    //Display the results 
        cout<<setw(x)<<nlines<<endl;
    }
    
}

void problem2(){
        //Declare Variables
    int number1, number2, number3, number4, number5;
    
 int nlines;    
    cout<<"Please enter five numbers ranging from numbers (3-27):"<<endl;
    
    //Loop for number1
    do{
        //Prompt use to enter number 1
        cin>>number1;
  
       //Display to enter another number if wrong
        if (number1>=28)
        cout<<"Try again. Please enter a number lower than 28: "<<endl;
        //Display to enter another number if wrong
        else if (number1<=2)
        cout<<"Try again. Please enter a number higher than 2: "<<endl;
        //Display this if number entered within the range
        else {
         cout<<"Thank You. Your output: \n";
            for (nlines=1;nlines<=number1;nlines++){
            cout<<"*";
            }
         cout<<endl;
         //Prompt user to enter the next number
         cout<<"Please enter your second number: \n";
        }
    } while(number1>=28||number1<=2);
    //Loop for number 2
         do{
        //Prompt use to enter number 1
        cin>>number2;
  
       //Display to enter another number if wrong
        if (number2>=28)
        cout<<"Try again. Please enter a number lower than 28: "<<endl;
        //Display to enter another number if wrong
        else if (number2<=2)
        cout<<"Try again. Please enter a number higher than 2: "<<endl;
        //Display this if number entered within the range
        else {
         cout<<"Thank You. Your output: \n";
            for (nlines=1;nlines<=number2;nlines++){
            cout<<"*";
            }
         cout<<endl;
         //Prompt user to enter the next number
         cout<<"Please enter your third number: \n";
        }
    } while(number1>=28||number2<=2);
    //Loop for the third number
         do{
        //Prompt use to enter number 1
        cin>>number3;
  
       //Display to enter another number if wrong
        if (number3>=28)
        cout<<"Try again. Please enter a number lower than 28: "<<endl;
        //Display to enter another number if wrong
        else if (number3<=2)
        cout<<"Try again. Please enter a number higher than 2: "<<endl;
        //Display this if number entered within the range
        else {
         cout<<"Thank You. Your output: \n";
            for (nlines=1;nlines<=number3;nlines++){
            cout<<"*";
            }
         cout<<endl;
         //Prompt user to enter the next number
         cout<<"Please enter your fourth number: \n";
        }
    } while(number1>=28||number3<=2);
     
    //Loop for the fourth number
         do{
        //Prompt use to enter number 1
        cin>>number4;
  
       //Display to enter another number if wrong
        if (number4>=28)
        cout<<"Try again. Please enter a number lower than 28: "<<endl;
        //Display to enter another number if wrong
        else if (number4<=2)
        cout<<"Try again. Please enter a number higher than 2: "<<endl;
        //Display this if number entered within the range
        else {
         cout<<"Thank You. Your output: \n";
            for (nlines=1;nlines<=number4;nlines++){
            cout<<"*";
            }
         cout<<endl;
         //Prompt user to enter the next number
         cout<<"Please enter your fifth number: \n";
        }
    } while(number1>=28||number4<=2);
    //Loop for the fifth number
         do{
        //Prompt use to enter number 1
        cin>>number5;
  
       //Display to enter another number if wrong
        if (number5>=28)
        cout<<"Try again. Please enter a number lower than 28: "<<endl;
        //Display to enter another number if wrong
        else if (number5<=2)
        cout<<"Try again. Please enter a number higher than 2: "<<endl;
        //Display this if number entered within the range
        else {
         cout<<"Thank You. Your output: \n";
            for (nlines=1;nlines<=number5;nlines++){
            cout<<"*";
            }
         cout<<endl;
         //Display Your have entered all five numbers
         cout<<"Thank You! You have entered all five numbers.\n";
        }
    } while(number1>=28||number5<=2);
}

void problem3(){
        cout<<"In problem # 3"<<endl<<endl;
}

void problem4(){
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
	cout << "Your gross pay is: $" << gross << ".\n" << endl;
}
void problem5(){
//Declare Variables
    float hours,package,bill;
    float pack1,pack2,pack3;
    pack1 = 29.95;
    pack2 = 34.95;
    pack3 = 42.95;
            
    //Ask user to input which package they currently have
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
    ;cout<<"The total monthly bill is: $ "<<bill<<"\n"<<endl;
}

void problem6(){
        cout<<"In problem # 6"<<endl<<endl;
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}