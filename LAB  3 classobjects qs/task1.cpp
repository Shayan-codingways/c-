#include<iostream>
using namespace std;

class Account{
    
private:
    float Account_balance;
    string name;
    int id;
    
public:

    //constructor 1
    Account(float a, string b, int c){
        Account_balance = a;
        name = b;
        id = c;
    }
    
    void credit(int add){
        Account_balance=Account_balance+add;
    }
    
    void debit(int withdraw){
        Account_balance=Account_balance-withdraw;
    }
    
    float get_balance(){
        return Account_balance;
    }
    

};


int main(){
    
    int add;
    int withdraw;
    
    Account A1(2000,"Shayan", 27027);
    
    
    cout<<"How much amount you want to add to your Account: "<< endl;
    cin >> add;
    A1.credit(add);
    cout<<endl;
    
    
    cout<<"How much amount you want to withdraw from your Account: "<< endl;
    cin >> withdraw;
    A1.debit(withdraw);
    cout<<endl;
    
    cout<<"current account balance: "<< A1.get_balance();
    

}
