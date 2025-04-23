#include <iostream>
#include <vector>
#include "task.h"
using namespace std ;


void tasks :: add(string TaskDis )
{
  task.push_back(TaskDis);
  cout<<"the task was add successfully ." << endl; 
}
void tasks :: show() 
{
  int i =1 ;
  for (string t : task )
    {
      cout << i << " . " << t <<endl;
      i++;
    }
  
    
    
}

void tasks :: del(int index )
{
  task.erase(task.begin()+index-1);
  cout << "the task was delete "<<endl;
  
}
void tasks :: edit(int index , string updated_task )
{
  task[index-1] = updated_task;
  cout << "the task was updated "<<endl;
}
void tasks :: clear()
{
  task.clear();
  cout << "the list was clear " <<endl;
}
void tasks :: done(int index )
{
  task[index-1] = "done";
}
  
  
