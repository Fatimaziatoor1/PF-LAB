#include <iostream>

using namespace std;



    void menu(){
        cout<<"\n.....Number Analyzer......\n"<<endl;
        cout<<"1) Check Even /Odd\n"<<endl;
        cout<<"2) Count Digits\n"<<endl;
        cout<<"3) Sum Of Digits\n"<<endl;
        cout<<"4) Check Prime\n"<<endl;
        cout<<"5) Exit"<<endl;
        cout<<"enter your choice"<<endl;
        }

   int getNumber(){
      int n;
        cout <<"enter a number";
        cin >> n;
   return n;
   }

    void checkEvenOdd(int n){
       if(n%2==0){
        cout<<n<<" is even number.\n";
       }
       else{
        cout<<n<<" is odd number.\n";
       }
    }

    int countDigits(int n){
       int count =0;
          if (n==0)
             return 1;
         while(n!=0){
             count ++;
             n= n/10;
      }
       return count;
   }

   int SumDigits(int n){
       int sum=0;
       while (n!=0){
          sum=sum+n%10;
           n=n/10;
       }
       return sum;
   }

   bool isPrime(int n){
   if(n<=5)
        return false;
   for(int i=2;i<=n/2;i++){
      if(n%i==0)
         return false;
      }
   }

   int main (){
     int choice;
     do{
        menu();
        cin >> choice;
        if (choice ==5){
            cout<<" GOOD LUCK .NEXT TIME";
            break;
        }
        num= getNumber()

        if (choice==1)
            checkEvenOdd(num);
        else if (choice ==2)
            cout << "Digits " <<countDigits(num) <<endl;
        else if (choice==3)
            cout << "Sum of Digits " << SumDigits(num) << endl;
        else if (choice==4){
            if (isPrime(num))
                cout << num << "is prime.\n"<<endl;
            else
                cout << num << "is not prime.\n"<<endl;
        }
        else
            cout << "error"<<endl;


     }
}


