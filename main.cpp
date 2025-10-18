#include <iostream>
using namespace std;
int main() {
    int choice;
    float radius, length, width, base, height, areac , arear, areat;


    cout << "-----------------------------" << endl;
    cout << "enter 1 for area of circle"<< endl;
    cout << "enter 2 for area of rectangle" <<endl;
    cout << "enter 3 for area of triangle" <<endl;
    cout << "----------------------------" << endl;
    bool loopcondition=true;
 while (choice!=5){
   cout << "enter choice:";

    cin >> choice;

    switch(choice)

    { case 1: cout << "enter the radius:";
    cin >> radius;
    areac = 3.14*(radius*radius);
    cout <<"area of circle=" << areac << endl;
     break;
     case 2:
     cout << "enter length and width: ";
     cin >> length >> width;
     arear= length*width;
     cout <<"area of rectangle=" << arear <<endl;
      break;
      case 3:
      cout << "enter base and height:";
      cin >> base >> height;
      areat = 1/2*base*height;
      cout <<"area of triangle=" << areat << endl;
       break;
       case 4:
       cout << "exit the program" << endl;

       break;
       loopcondition=false;
       default :
       cout << "enter between 1-4" << endl;
       break;
       }
    }


    return 0;

}
