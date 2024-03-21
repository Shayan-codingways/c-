#include <iostream>
using namespace std;



class Account{
    
    private:
        double account_no;
        float account_balance;
        int security_code;
    
    public:
        void set_values(double a, float b, int c){
            account_no=a;
            account_balance=b;
            security_code=c;
        }
        
        string display(){
            return "The account balance of account number: " + to_string(account_no) + " is " + to_string(account_balance);
            // to_string is used for typecasting 
            
        }
        
    

      
    
};

int main()
{
    Account A1;
    A1.set_values(23334223344, 26235232.5, 27027);
    cout<<A1.display()<<endl; // won't print by itself, so we have to use cout.
    
}
