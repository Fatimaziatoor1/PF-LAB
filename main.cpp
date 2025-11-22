#include <iostream>

using namespace std;

int main()

{
   int num;
   bool isprime= true;
   cout<< "enter a number:"<<endl;
   cin>> num;
   for (int i = num/2; i>=2; i--){
    if (num%i==0)
    isprime = false;
   }

   if (isprime==false)
    cout << "this number is not a prime number"<<endl;
   else
    cout << "this number is a prime number "<<endl;

return 0;
}
