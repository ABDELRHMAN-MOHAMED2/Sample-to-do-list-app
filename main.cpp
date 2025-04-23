#include <iostream>
#include <vector>
using namespace std ;
#include "task.h" 

int main()
{ bool exit = true ;
 tasks t;
  while(exit)
 { int option ;

  cout << "1. add task " << endl ;
  cout << "2. show tasks " << endl ;
  cout << "3. edit task " << endl ;
  cout << "4. delete task " << endl ;
  cout << "5. done task " << endl;
  cout << "6. clear "<< endl;
  cout << "7. exit" << endl ;
  while(true)
    {
  cin >> option;
  if (cin.fail())
  {
    cin.clear();
    cin.ignore(1000,'\n');
    cout << "invalid input " ;
   }
    else if (cin.peek()!='\n')
      {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "invalid input " ;
      }
     else if (option > 7 || option <1)
      cout << "invalid input " ;
      else 
       break;    
      }
  
  if (option == 1)
  {
       string task ;
      cout << "enter the task description " <<endl ;
    cin.ignore();
      getline(cin,task);
      t.add(task);
  }
      
      else if (option == 2 )
        t.show(); 
        
      else if (option ==3)
       {
        int index ;
        string updated_task;
         cout << " enter the index of the task you want to edit " << endl ;
         
         cin >> index;
       cout << "enter the edit " << endl ;
         cin.ignore();         getline(cin,updated_task);
         t.edit(index,updated_task);
       }
  else if (option == 4 )
  {
    int index;
    cout << " enter the index of the task you want to edit " << endl ;
    cin >> index;
    t.del(index);
  }
  else if (option==5)
  {
  int index;
    cout << " enter the index of the task you want to edit " << endl ;
    cin >> index;
    t.done(index);

  }
  else if (option == 6)
    t.clear();
  else if (option == 7)
    exit=false;
    
    }     
  }
  
