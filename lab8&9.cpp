#include <iostream>

using namespace std;

int attemptwithdraw(int  balance,int amount){
     cout<<"attempting withdrawl..."<<endl;

   if(amount<=balance){
     balance=balance-amount ;
     cout << "withdrawl sucessful.New balance inside function:"<<balance<<endl;

 } else{
     cout << "Not enough balance";
 }
}


int main()
{

   int balance,withdrawamount;

  balance=5000;
  withdrawamount=1200;

     attemptwithdraw(balance,withdrawamount);
         cout<<"balance in main:"<<balance<<endl;





    return 0;
}
