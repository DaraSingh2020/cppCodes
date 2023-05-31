#include <iostream>
using namespace std;

int main()
{
   int x = -1;

   cout << " This part of the code works fine" << endl;
   cout << "---------------------------------" << endl;

   cout << "Before try" << endl;
   try {
      cout << "Inside try: " <<  endl;
      cout << "Maybe x<0. Let's try it with an if statement: " << endl;
      if (x < 0)
      {
         throw x;
         cout << "After throw (Never executed) \n";
      }
   }
   catch (int x ) {
      cout << "Exception Caught \n";
   }

   cout << "After catch (Will be executed) \n";
   return 0;
}
