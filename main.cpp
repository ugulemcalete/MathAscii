#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    while(true)
    {
      cout << "Type two coordinates" << endl;
      float x, y, r, stop;

      cout << "Type X: ";
      cin >> x;
      cout << "Type Y: ";
      cin >> y;
      r = sqrt(x*x+y*y);
      cout << "R = " << r << endl;
      cout << "------------------------------------" << endl;
      cout << "sin(alpha) = " << y/r << endl;
      cout << "cos(alpha) = " << x/r << endl;
      cout << "tg(alpha) = " << y/x << endl;
      cout << "ctg(alpha) = " << x/y << endl;
      cout << "------------------------------------" << endl;
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
