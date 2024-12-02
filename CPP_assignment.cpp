#include <iostream>
using namespace std;
 class Bank
 {
 private:
                int amount = 0;
 public:
                 void deposit( int val ) { amount+= val;}
                 void withdraw( int val )
                 {
                     if( amount - val < 0 )
                        cout << "Not enough cash" << endl;
                     else
                        amount = amount - val;
                 }
                 int getBalance() { return amount; }
 };


int main()
{
    int n , ch , amt , accno;
    cout << "Enter customers count" << endl;
    cin >> n;
    Bank  c[ n ];
    while( true )
    {
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Balance" << endl;
        cout << "4. Exit" << endl;
        cin >> ch;
        if( ch == 1 )
        {
            cout << "Enter accno and amount to deposit" << endl;
            cin >> accno >> amt;
            c [ accno ].deposit(amt);
        }
        else if( ch == 2 )
        {
            cout << "Enter accno and amount to withdraw" << endl;
            cin >> accno >> amt;
            c [ accno ].withdraw(amt);
        }
        else if( ch ==3  )
        {
            cout << "Enter accno " << endl;
            cin >> accno ;
            cout << "Your bank balance = " << c [ accno].getBalance() << endl;
        }
        else if( ch == 4 )
           break;
    }

   return 0;
}
