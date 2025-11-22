#include <iostream>

using namespace std;

int main()
{
    int row,column;
    cout <<"enter number of rows"<<endl;
    cin >> row;
    cout <<"enter number of columns"<<endl;
    cin >> column;
    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=column; j++)
        {cout << "(" <<  i <<"-"<< j << " F)";}
        cout << endl;
    }
    int srow, scolumn;
    cout << "choose your seat number: ";
    cin >> srow >> scolumn;
    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=column; j++)
        if (i == srow && j == scolumn)
         {cout << "(" <<  i <<","<< j << " R)";}
        else
        {cout << "(" <<  i <<","<< j << " F)";}
        cout << endl;
    }


}
