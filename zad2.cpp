#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
//globalna tablica dla tej funkcji
char znaki[100][100];
string znak;

void line(int x1, int y1, int x2, int y2){
  // powiedzmy, ze punkty to (0,0) i (3,3), przekątna wtedy wynosi 3, i zamalowane są 3 znaki
  float x, y;
  for(int j=0; j<=y2; j++){
    for(int i=0; i<=x2; i++){
       x= (x2/y2)*j;
       y= (y2/x2)*i;
       if((j<=y && y<=(j+1)) || (i<=x && x<=(i+1))
          znaki[i][j]=' ';
       else if((j<=y && y<=(j+1)) || (i<=x && x<=(i+1)))
          znaki[i][j]=znak[0];
       else
          znaki[i][j]=' ';
    }
  }
}

int main()
{
    while(true)
    {
      int stop, menu, a, b;

      cout << "Welcome in shape generator choose your figure\n";
      cout << "1. Square\n";
      cout << "2. Triangle\n";
      cout << "3. Rectangle\n";
      cout << "4. Hexagon\n";
      cin >> menu;
      switch(menu){
case 1:
        while(1)
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
        while(1)
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

        line(0,0,a,b);
        for (int i = 0; i<a; i++){
          for (int j = 0; j<b; j++)
            cout << znaki[j][i] << ' ';
          cout << '\n';
        }


        break;



case 3:
        while(1)
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
          cout << "lol";
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
