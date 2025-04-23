#include <iostream> 
#include <vector>
using namespace std ;
class tasks 
{
   private :
    vector <string> task ;
   public:
     
    void add(string TaskDis );
    void show( );
    void edit(int index , string updated_task);
    void del(int index );
    void done(int index) ;
    void clear();


};