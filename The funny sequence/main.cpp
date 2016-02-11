/* 
 * File:   main.cpp
 * Author: Jose Damian
 * Created on April 25, 2014, 3:23 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begin Here:
int main(int argc, char** argv) {
//Declare Variables
 int   ugly[150];
 int next_ugly_no,Min;
 int i2,i3,i5,i;
 int next_mulitple_of_2,next_mulitple_of_3,next_mulitple_of_5;
// Initialize first ugly no:  
 int ugly[0] = 1;
// Initialize three array index variables i2, i3, i5 to point to 
 //  1st element of the ugly array: 
    int    i2 = i3 = i5 =0; 
// Initialize 3 choices for the next ugly no:
         next_mulitple_of_2 = ugly[i2]*2;
         next_mulitple_of_3 = ugly[i3]*3;
         next_mulitple_of_5 = ugly[i5]*5;
// Now go in a loop to fill all ugly numbers till 150:
for (i = 1; i < 150; i++ ) 
{
    // These small steps are not optimized for good 
      //readability. Will optimize them in C program */
    next_ugly_no  = Min(next_mulitple_of_2,
                                  next_mulitple_of_3,
                                  next_mulitple_of_5); 
    if  (next_ugly_no  == next_mulitple_of_2) 
    {             
        i2 = i2 + 1;        
        next_mulitple_of_2 = ugly[i2]*2;
    } 
    if  (next_ugly_no  == next_mulitple_of_3) 
    {             
        i3 = i3 + 1;        
        next_mulitple_of_3 = ugly[i3]*3;
     }            
     if  (next_ugly_no  == next_mulitple_of_5)
     {    
        i5 = i5 + 1;        
        next_mulitple_of_5 = ugly[i5]*5;
     } 
     ugly[i] =  next_ugly_no       
 
cout<<next_ugly_no<<endl;
    
    
   return 0;
}

