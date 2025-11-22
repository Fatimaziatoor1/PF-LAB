#include <iostream>
#include <string>
using namespace std;

int main()
{
 string password;
 while (true){
    cout <<"enter password"<<endl;
    cin >> password;
    if (password== "python 123"){
        cout << "YOU HAVE ACCESS TO THIS SYSTEM"<< endl;
        break;
    }else {
    cout<<" Wrong password.TRY AGAINNNNNN"<<endl;
    }
 }  return 0;
}
