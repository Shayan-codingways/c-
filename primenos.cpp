#include<iostream>
using namespace std;

int prime(int a){
    int i;

    // logic
    int prime=1;
    for(i=2;i<a;i++){

       if(a%i==0){
         prime=0;
         break;
       }
       
    }

        if (prime==1){
            return 1;
        }
        else{
            return 0;
        }


}
int main(){

    int number;

    cout<<"Enter a number to check whther it's prime or not: ";
    cin >> number;

    //call function 
    int value=prime(number);

    // display result
    if(value){
        cout << "The number: " << number << " is prime";
    }
    else{
        cout << "The number: " << number << " is not prime";
    }


    return 0;
}