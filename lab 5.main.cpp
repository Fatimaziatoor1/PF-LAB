#include <iostream>

using namespace std;

int main()
{
    int rows,i,j,y;
    cout << "enter number of rows for a pyramid"<<endl;
    cin >> rows;

     for (i =1; i<=rows; ++i){
        for ( j=1; j<= rows-i; ++j){
            cout << " ";
     }
         for ( y=1; y<=(2*i-1); ++y){
            cout<< "*";}

              cout << endl;

     }

}

