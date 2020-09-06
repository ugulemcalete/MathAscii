#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
//globalna tablica dla tej funkcji
char znaki[100][100];

void line(int x1, int y1, int x2, int y2){
  // powiedzmy, ze punkty to (0,0) i (3,3), przekątna wtedy wynosi 3, i zamalowane są 3 znaki
  int przekatna = sqrt((x2-x1)*(x2-x1)+(y2-y1)(y2-y1));
  for(int i)
  if(przekatna/(x2-x1){

  }
}

int main()
{
    while(true)
    {
      int stop, menu, a, b;
      string znak;

      cout << "Welcome in shape generator choose your figure\n";
      cout << "1. Square\n";
      cout << "2. Triangle\n";
      cout << "3. Rectangle\n";
      cout << "4. Hexagon\n";
      cin >> menu;
      switch(menu){
case 1:
        while(statement)
        {
          cout << "Choose your one ASCII character:\n";
          cin >> znak;
          if(znak.length() == 1)
            break;
          cout << "Think dumbass" << endl;
        }

        cout << "Type A: ";
        cin >> a;
        cout << endl;
        for (int i = 0; i<a; i++){
          for (int j = 0; j<a; j++)
            cout << znak << ' ';
          cout << '\n';
        }
        break;


case 2:
        while(statement)
        {
          cout << "Choose your one ASCII character:\n";
          cin >> znak;
          if(znak.length() == 1)
            break;
          cout << "Think dumbass" << endl;
        }

        cout << "Type Height: ";
        cin >> a;
        cout << "Type base: ";
        cin >> b;
        float h = sqrt(a*a+b*b);
        char[][]
        for (int i = 0; i < ; ) {
          /* code */
        }



        break;



case 3:
        while(statement)
        {
          cout << "Choose your one ASCII character:\n";
          cin >> znak;
          if(znak.length() == 1)
            break;
          cout << "Think dumbass" << endl;
        }
        cout << "Type A: ";
        cin >> a;
        cout << "Type B: ";
        cin >> b;
        for (int i = 0; i<a; i++){
          for (int j = 0; j<b; j++)
            cout << znak << ' ';
          cout << '\n';
        }
        break;


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
