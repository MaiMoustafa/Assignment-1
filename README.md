5 & 7 & prog ex 1

'''cpp
#ifndef BankAcc
#define BankAcc
#iclude <string>
using namespace std;
class BankAccount
{
 private:
    string Depositorname;
    string Accountnumber;
    double Balance;
 public:
    void setDepositorname (string s)
    {
      Depositorname = s;
    }
    void setAccountnumber (string n)
    {
      Accountnumber = n;
    }
    void setBalance (double b)
    { 
      Balance = b;
    }
    string getAccountnumber ()
    {
      return Accountnumber;
    }
    string getDepositorname ()
    { 
      return Depositorname;
    }
    double getBalance ()
    {
      return Balance;
    }
    void deposit (double d)
    { 
      Balance += d
    }
    void withdraw (double b)
    { 
      if (b<Balance)
      { 
         Balance -= b;
      }
      else {
        cout<< "You dont have enough balance";
        }
      }
    BankAccount ( ) //default constractor
    { 
      Depositorname = " "; 
      Accountnumber = " "; 
      Balance = 200;
    }
};

void main( )
{
   BankAccount B1( ); 
   cout<<"enter your account number and your name"<<endl;
   string s,n;
   cin>> s >> n;
   B1.setDepositorname (s);
   B1.setAccountnumber (n);
   cout<<"Enter the amount of money you want to withdraw";
   double w;
   cin>>w;
   B1.withdraw (w);
   cout<<"Enter the amount of money you want to deposit";
   double d;
   cin>>d;
   B1.deposit (d);
   cout<<"your current Balace is"<<B1.getBalance()<<endl;
   cout<<"your account number is"<<B1.getAccountnumber()<<endl;
   cout<<"the depositor's name is"<<B1.getDepositorname()<<endl;
}
'''



