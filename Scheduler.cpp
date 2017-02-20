/*
 Name of the file: Scheduler.h,main.cpp
 Name of the writer: Binod Katwal
 The Due Date: Sunday, Februrary 29,2015
 Programming Language: C++
 */


#include "Scheduler.h"// header
// c++ strander library
#include <iostream> // must use to  basic programming
#include <cstdio>
#include <string> // string
#include <vector>

using namespace std;
bool CheckSchedule(string a);

Scheduler::Scheduler()// default constructor
{
    // setting Arrange as empty
    Arrange = NULL;
    teams = 0;
}


// generate the schedule for the number of team = teams
Scheduler::Scheduler(int ini_teams)// constructor
{
    teams = ini_teams; //team equal ini_teams
    Arrange = new int*[teams]; // arrange array  as new team int array
    for(int i = 0; i < teams; i++)
        Arrange[i] = new int[teams]; // array of arrange as team
    
    // nested looop used
    for (int i=0; i<teams; i++)
        for (int j=0; j<teams; j++)
        Arrange[i][j] = 0;
    }


void Scheduler:: generateSchedule()
{
    //calls the void schedule function: include table of the schudule
    schedule(teams,0,0,1,0);
}


void Scheduler:: schedule(int number,int a ,int b,int c,int d){
    // recursive function
    
    if (number== 2) // number equal to two, do below
    {
        
        Arrange[a][b] = c+d;
        Arrange[a][b+1] = c+1+d;
        Arrange[a+1][b] = c+1+d;
        Arrange[a+1][b+1] = c+d;
        return;
    }

else
    // if number isn't two then do below
    // for example, if we enter 4 as teams. those four or any teams will be  position below.
    
    schedule(number/2,a,b,1,d); //input numbers to the schedule(top left numbers)
    
    schedule(number/2,a+number/2,b+number/2,1,d);// down right  numbers
    
    schedule(number/2,a+number/2,b,1,d+number/2); // down left  numbers
    
    schedule(number/2,a,b+number/2,1,d+number/2);// top right numbers
}


// display the table content of the schedule for each team
void  Scheduler::print()
    {
        // use of nested for loop for  arrange array
        for (int i = 0; i < teams; i++)
        {
            for (int j = 0; j < teams; j++)
                cout << Arrange[i][j] << " ";
            cout << endl;
        }
    }


//Destructor

Scheduler::~Scheduler()
{
    //arrange
    for(int i = 0; i < teams; i++)
        delete[] Arrange[i];
    delete[] Arrange;
}

// this functinon will checks in the schedule if number teams is valid or not.
bool CheckSchedule(string a)
{
    
    for (int i = 0; i < a.length(); i++) // conditional statement
    {
        
        if (a[i] - 48 < 0 || a[i] - 57 > 0) // does false if statement is right, if not, return as true
            return false;
    }
    return true;
}
