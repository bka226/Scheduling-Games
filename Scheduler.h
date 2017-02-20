#ifndef SORTINGS_H
#define SORTINGS_H




class Scheduler
{
public:

Scheduler(); // default constructor Scheduler
Scheduler(int ini_teams);// constructor
  
// generate the schedule for the number of team = teams
void generateSchedule();// display the table content of the schedule for each team

~Scheduler();// destructor

void print();

void schedule(int n,int a,int b,int c,int d);

private:

int teams; // the number of teams to be scheduled int** Arrange;
int **Arrange;
// the pointer points at a dynamic two-dimensional
// array to represent the scheduling table for each team

};




#endif
