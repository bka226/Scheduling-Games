/*

 Name of the file: Scheduler.h,Scheduler.cpp
 Name of the writer: Binod Katwal
 The Due Date: Monday, Februrary 29,2015
 The purpose of the project to help sport teams to schedule their games so that every team
plays every other team as in a Round Robin Tournament
 Programming Language: C++
 */
#include "Scheduler.h"
#include <iostream>
#include <cstdio>
#include <string>
#include <stdlib.h>

using namespace std;// helps with cin and cout
bool CheckSchedule(string a); // prototype funcion true or false
// main function

int main()
{
//int num = atoi(s.c_str());
    //Display
while (true)
 {
        string  s; // declaring s as string
        cout << "Please input the number of teams to be scheduled: (click q or Q to quit) : "; //display
        cin >> s; //input
if (s[0] == 'q' || s[0] == 'Q') // conditional case: if q or Q , do below
        {
            cout <<"Thanks for using scheduling program.\n" <<endl;
            break;
        }
        
            
        // if  entered value  comeout as  false in checkschedule,do below
if (CheckSchedule(s) == false)
  {
            if (s[0] == 'a' || s[0] == 'A') // if  entered  false equal to this print below
        {
            cout<< "Invalid number!\n" <<endl;
           
        }
        
         // or print below if false and doesn't equal to a, A
    else
            cout << "the number of teams is not a power of two" << endl << endl;
        }
else
  {      
         // if check scheule is not false then must be true so do below
        int num = atoi(s.c_str());
 /*if (num >= 512) // if entered value is above 512 then print$
                    {
                        cout <<"The maximum number of teams is 512\n" <<endl;
                    }
*/
            // arrange of the num.
            if (num && (!(num&(num-2))) == 0) // conditional arrange
            {
                if (num== 1) // if entered value equal to 1, print 1
                {
		cout  << "The schedule for " <<num <<" teams:" <<endl;
                    cout <<"1\n" <<endl;
                }
                else
                    if (num >= 512) // if entered value is above 512 then print below
                    {
                        cout <<"The maximum number of teams is 512\n" <<endl;
                    }
                else
                    // if number doesn't equal to the power of two then display below
                cout << "the number of teams is not a power of two" << endl << endl;
             
                }
            
            
else
//if number is  valid number and if it's not above 512 but the power of two then do below
{
// Display square  of  2 if  number of the teams is the  square of 2

int num = atoi(s.c_str());
            
            if (num && (!(num&(num-2))) != 0) // conditional arrange
            {
                if (num <2 || num > 512) // loops to check if square root less than 2 and more than  512
                {
                    
                
                cout <<"The maximum number of teams is 512\n" <<endl; //display
                }
                
                if (num <=512) // if entered value equal to 1, print 1
                {
                                
                  cout  << "The schedule for " <<num <<" teams:" <<endl;

                Scheduler *display = new Scheduler(num); 
     display->generateSchedule(); // calling function
                display->print(); // caling function
                cout << endl;
		}
		}            
     }
        }
    }
    return 0;
}
// The end of the program
