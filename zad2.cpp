#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    while(true)
    {
      int stop, menu;
      cout << "Welcome in shape generator choose your figure\n";
      cout << "1. Square\n";
      cout << "2. Triangle\n";
      cout << "3. Rectangle\n";
      cout << "4. Hexagon\n";
      cin >> menu;
      switch(menu){
        case 1:

        break;
        ////////////////////////////////////////////////////////////////////////////////////////
        /*case 2:

        break;
        ////////////////////////////////////////////////////////////////////////////////////////
        case 3:

        break;
        ////////////////////////////////////////////////////////////////////////////////////////*/
        default:

          break;
      }





      while(true)
      {
          cout << "Press 1 to continue or 0 to stop: ";
          cin >> stop;
          if( stop == 1 || stop == 0 )
              break;
      }
      if(stop == 0)
          break;
      else
          cout << endl << endl << "====================================" << endl;
    }
    return 0;
}
